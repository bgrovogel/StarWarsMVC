#include <string>
#include "forcebeing.h"

using namespace std;

class Jedi : public ForceBeing {

public:
    Jedi(string jediName, int level):ForceBeing(level) {
        setName(jediName);
        setGood();
    }

    int getPowerLevel() {
        return ForceBeing::getPowerLevel() + 1;
    }
};