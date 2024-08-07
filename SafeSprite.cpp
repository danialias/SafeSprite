/****************************************************************************
 
SafeSprite.cpp

When there is no image file available, shows a predetermined image instead crashing

Created by Daniel Alias on 2024/08/07 (yyyy/mm/dd) under MIT Licence

 ****************************************************************************/

#include "SafeSprite.h"

USING_NS_AX;

SafeSprite* SafeSprite::create(const std::string& filename) {

    auto finalFilename = filename;
    auto fileExist = FileUtils::getInstance()->isFileExist(finalFilename);
    if (!fileExist) {
        finalFilename = "HelloWorld.png";
#ifndef NDEBUG
        AXLOG("File %s not found",filename.c_str());
#endif
    }

    SafeSprite* sprite = new SafeSprite();
    if (sprite && sprite->initWithFile(finalFilename)) {
        sprite->autorelease();
        return sprite;
    } else {
        AX_SAFE_DELETE(sprite);
        return nullptr;
    }
}
