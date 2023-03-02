#ifndef GAME_H
#define GAME_H
#include <vector>
#include <cstring>
#include <iostream>
#include <fstream>

#include "SmallCharacter.h"
#include "MedCharacter.h"
#include "BigCharacter.h"

class Game{
protected:
    std::string stars = "************ ";
    std::string middle_head = "**************** ";
    std::string head = "Printing Sisters";
    std::vector <Character*> characterList;
public:
    Game(std::string filename){
        std::ifstream file(filename);
        std::string char_name;
        std::string char_size;
        double char_weight;
        int char_speed;
        double char_hair;
        std::string char_race;
        std::string special;
        
        while(file >> char_name >> char_size >> char_weight >> char_speed >> char_hair >> char_race >> special){
            
        }
    }
    void getCharacters(){
        std::cout << stars << head << stars << std::endl;
        for(int i = 0; i < characterList.size(); i++){
            characterList[i]->print();
        }
    }
    
    void getCharactersByRace(){
        bool sorted = false;
        while( !sorted ){
            sorted = true;
            int n = characterList.size();
            for(int i = 1; i < n; i++){
                std::string str1 = characterList[i-1]->getRace();
                std::string str2 = characterList[i]->getRace();
                if(strcmp(str1, str2) > 0){
                    std::string temp = characterList[i-1];
                    characterList[i-1] = characterList[i];
                    characterList[i] = temp;
                    sorted = false;
                }
            }
            n--;
        }
    }
    
    void getCharactersBySpeed(){
        
    }
    
    void getCharactersByHair(){
        
    }
    
//    void populateCharacters(std::string filename){
//        std::ifstream file(filename);
//        
//    }
//    
//    void print(){
//        
//    }
};

#endif /* GAME_H */

