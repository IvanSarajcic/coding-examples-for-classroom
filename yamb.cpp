// six values like dice, ramdomly chosen
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void rollDice() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    for (int i = 0; i < 6; i++) {
        int dieValue = rand() % 6 + 1; // Random number between 1 and 6
        cout << "Die " << (i + 1) << ": " << dieValue << endl;
    }
}
int main() {
    rollDice();
    return 0;
}
