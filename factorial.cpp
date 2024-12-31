#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0; // Exit the program gracefully
    }

    int fact = factorial(n);
    cout << "The factorial of " << n << " is " << fact << endl;

    return 0;
}
