#ifndef BIGCHARACTER_H
#define BIGCHARACTER_H
#include "Character.h"

class BigCharacter: public Character{
protected:
    std::string skill;
public:
    virtual void print(){
        printAttribute(name, 18, "Name: ");
        printAttribute(size, 13, "Size: ");
        printAttribute(weight, 16, "Weight: ");
        printAttribute(speed, 10, "Speed: ");
        printAttribute(hairLength, 15, "HairLen: ");
        printAttribute(race, 17, "Race: ");
        printAttribute(skill, 22, "Skill: ");
        std::cout << std::endl;
    }
};

#endif /* BIGCHARACTER_H */

