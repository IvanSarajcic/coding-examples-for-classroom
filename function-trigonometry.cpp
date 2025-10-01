// example of simple function, how it works
#include <iostream>
using namespace std;

// Function to sinus of an angle in radians

double sine(double radians) {
    return sin(radians); // Return the sine of the input angle
}

int main() {
    double angle;

    cout << "Enter an angle in radians: ";
    cin >> angle;

    double result = sine(angle); // Call the sine function
    cout << "Sine of " << angle << " radians is " << result << endl;

    return 0;
}


//
