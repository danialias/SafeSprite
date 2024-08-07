/****************************************************************************
 
SafeSprite.h

When there is no image file available, shows a predetermined image instead crashing

Created by Daniel Alias on 2024/08/07 (yyyy/mm/dd) under MIT Licence

 ****************************************************************************/

#ifndef __SAFE_SPRITE_H__
#define __SAFE_SPRITE_H__

#include "axmol.h"

class SafeSprite : public ax::Sprite {
public:
    static SafeSprite* create(const std::string& filename);
};

#endif // __SAFE_SPRITE_H__
