#include <iostream>

#include "src/utils.h"
#include "src/game.h"
#include "src/matchmaker.h"

int main(){
    Game* testgame = new Game( Matchmaker::make_BvsP() );
    testgame->run();
}
