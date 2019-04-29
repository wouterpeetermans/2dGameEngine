//
// Created by wouter on 3/4/19.
//

#ifndef INC_2DGAME_GAMEOBJECT_H
#define INC_2DGAME_GAMEOBJECT_H

#include <memory>

namespace GameSpace{
    class GameObject {
            public:
            virtual void Draw()=0;
            virtual void Update()=0;
            virtual ~GameObject()=default;
    };
}

#endif //INC_2DGAME_GAMEOBJECT_H