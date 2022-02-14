//
// Created by macie on 13.02.2022.
//

#include "Ogre.h"

Ogre::Ogre(std::string ogre_name, int ogre_hp) : Unit(ogre_name, ogre_hp)
{

}

int Ogre::attack() {
    return rand() % 15 + 1;
}
