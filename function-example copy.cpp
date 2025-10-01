// example of simple function, how it works
#include <iostream>
using namespace std;

// Function to duplicate number

int duplicate(int n) {
    return n * 2; // Return double the input value
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int result = duplicate(number); // Call the duplicate function
    cout << "Double of " << number << " is " << result << endl;

    return 0;
}

