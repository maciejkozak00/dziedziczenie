//
// Created by macie on 13.02.2022.
//

#ifndef DZIEDZICZENIE_OGRE_H
#define DZIEDZICZENIE_OGRE_H

#include <string>
#include "Unit.h"

class Ogre : public Unit
{

public:
    Ogre(std::string ogre_name, int ogre_hp);

    int attack();

};


#endif //DZIEDZICZENIE_OGRE_H
