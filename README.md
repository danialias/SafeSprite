# SafeSprite for Axmol
This alternative to `ax::Sprite` avoids a crash when the requested file is not found, showing instead a predetermined image (`HelloWorld.png` by default).

Include the following files in your `Source` folder:

```
SafeSprite.h
SafeSprite.cpp
```

and use `#include "SafeSprite.h"` where needed. You can edit the predetermined image inside `SafeSprite.cpp`.

Call it with `auto mySprite = SafeSprite::create("myImage.png");`
