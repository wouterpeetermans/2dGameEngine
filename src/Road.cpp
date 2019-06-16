//
// Created by wouter on 6/15/19.
//

#include <include/Road.h>

#include "Road.h"

namespace GameSpace{
    void Road::Update(int timeTook) {
        this->Xpos = player->getXpos() - 2000;
        this->Ypos = 0;
    }

    Road::Road(std::shared_ptr<GameObject> player) : StaticObject(0,0) {
        this->player = player;
    }
}