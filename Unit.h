//
// Created by macie on 13.02.2022.
//

#ifndef DZIEDZICZENIE_UNIT_H
#define DZIEDZICZENIE_UNIT_H

#include <string>

class Unit {
    std::string name;
protected:
    int hp;

public:
    Unit(std::string unit_name, const int &unit_hp);

    virtual int attack();
    bool isAlive();
    int getHp();
    std::string getName();
    void getHit(int dmg);

};


#endif //DZIEDZICZENIE_UNIT_H
