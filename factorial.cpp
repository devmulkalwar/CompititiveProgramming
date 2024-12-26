#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    if (n == 0 || n == 1) {
        return fact;
    } else {
        fact = n * factorial(n - 1);
    }
    return fact;
}

int main() {
    int n = 0;

    cout << "Enter a number :" << endl;
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int fact = factorial(n);
        cout << "The factorial of " << n << " is " << fact << endl;
    }

    return 0;
}
