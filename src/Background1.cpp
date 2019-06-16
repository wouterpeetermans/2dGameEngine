//
// Created by wouter on 6/15/19.
//

#include <include/Background1.h>

#include "Background1.h"

namespace GameSpace{
    void Background1::Update(int timeTook) {
        this->Xpos = player->getXpos() - 2000;
        this->Ypos = 0;
    }

    Background1::Background1(std::shared_ptr<GameObject> player) : GameObject(0,0) {
        this->player = player;
    }
}