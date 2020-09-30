#include <string>

using namespace std;

class StarWars {

public:
    static string getWinner(ForceBeing &player1, ForceBeing &player2) {
        return player1.getPowerLevel() > player2.getPowerLevel() ? player1.getName() : player2.getName();
    }

    static void printWinner(string winner) {
        cout << "The winner is: " << winner << endl;
    }
};