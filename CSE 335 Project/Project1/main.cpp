#include <cstdlib>
#include "Game.h"

/*
 * 
 */
int main(int argc, char** argv) 
{   
    
    Game game = Game("sisters.txt");
    
    game.getCharacters();
    
    game.getCharactersByRace();
    
    game.getCharactersBySpeed();

    game.getCharactersByHair();
    
    game.getCharacters();
    
    return 0;
}

