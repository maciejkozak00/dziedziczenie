//
// Created by macie on 14.02.2022.
//

#ifndef DZIEDZICZENIE_BERSERKER_H
#define DZIEDZICZENIE_BERSERKER_H

#include "Unit.h"
#include <string>

class Berserker : public Unit
{

public:
    Berserker(std::string berserker_name, int hp);

    int attack();
};


#endif //DZIEDZICZENIE_BERSERKER_H
