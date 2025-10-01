// fibonacci example for pupils

#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) return 0; // Base case: Fibonacci(0) = 0
    if (n == 1) return 1; // Base case: Fibonacci(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = fibonacci(n); // Call the fibonacci function
    cout << "Fibonacci number at position " << n << " is " << result << endl;

    return 0;
}