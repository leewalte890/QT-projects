#ifndef MEDCHARACTER_H
#define MEDCHARACTER_H
#include "Character.h"

class MedCharacter: public Character{
protected:
    std::string weapon;
public:
    virtual void print(){
        printAttribute(name, 18, "Name: ");
        printAttribute(size, 13, "Size: ");
        printAttribute(weight, 16, "Weight: ");
        printAttribute(speed, 10, "Speed: ");
        printAttribute(hairLength, 15, "HairLen: ");
        printAttribute(race, 17, "Race: ");
        printAttribute(weapon, 22, "Weapon: ");
        std::cout << std::endl;
    }
};

#endif /* MEDCHARACTER_H */

