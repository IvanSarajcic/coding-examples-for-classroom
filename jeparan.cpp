#include <iostream>
using namespace std;

bool jeParan(int broj) {
    return broj % 2 == 0; // врати true ако је broj паран
}

int main() {
    for (int i = 1; i <= 10; i++) {
        if (jeParan(i))
            cout << i << " je PARAN\n";
        else
            cout << i << " je NEPARAN\n";
    }
    return 0;
}