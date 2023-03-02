#ifndef SMALLCHARACTER_H
#define SMALLCHARACTER_H
#include "Character.h"

class SmallCharacter: public Character{
protected:
    bool hasGun;
public:
    virtual void print(){
        printAttribute(name, 18, "Name: ");
        printAttribute(size, 13, "Size: ");
        printAttribute(weight, 16, "Weight: ");
        printAttribute(speed, 10, "Speed: ");
        printAttribute(hairLength, 15, "HairLen: ");
        printAttribute(race, 17, "Race: ");
        printAttribute(hasGun, 22, "IsEquipped: ");
        std::cout << std::endl;
    }
};

#endif /* SMALLCHARACTER_H */

