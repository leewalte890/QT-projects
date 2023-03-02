#ifndef CHARACTER_H
#define CHARACTER_H
#include <iomanip>

class Character{
protected:
    std::string name;
    double weight;
    int speed;
    double hairLength;
    std::string race;
    std::string size;
public:
    std::string getRace() const {
        return race;
    }
    
    int getSpeed() const {
        return speed;
    }
    
    double getHair() const {
        return hairLength;
    }
    
    virtual void print() = 0;
    
    template<typename T> void printAttribute(T t, const int& width, std::string label){
        std::cout << std::left << std::setw(width) << std::setfill(' ') << label << t;
    }
    
    virtual ~Character(){}
};

#endif /* CHARACTER_H */

