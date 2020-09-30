#include <string>
#include <iostream>
#include "jedi.h"
#include "sith.h"
#include "starwars.h"
#include "forcebeing.h"

using namespace std;

    int main() {
        Sith darthVader("Darth Vader",100);
        Jedi lukeSkyWalker("Luke Skywalker", 99);
        StarWars::printWinner(StarWars::getWinner(darthVader, lukeSkyWalker));
    return 0;
}
