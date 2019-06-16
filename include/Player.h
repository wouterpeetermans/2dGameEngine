//
// Created by wouter on 6/15/19.
//

#ifndef INC_2DGAME_PLAYER_H
#define INC_2DGAME_PLAYER_H


#include "MovingObject.h"

namespace GameSpace{
    class Player : public MovingObject {
    public:
        Player() : MovingObject(2000,0){};
        virtual void Update(int timeTook) override;
    };
}




#endif //INC_2DGAME_PLAYER_H
