#include <iostream>
using namespace std;

void loopFromNumber(int start) {
    for (int i = start; i <= start + 9; i++) {
        cout << i << endl;
    }
}

int main() {
    int userNumber;
    cout << "Enter a starting number: ";
    cin >> userNumber;
    loopFromNumber(userNumber);
    return 0;
}