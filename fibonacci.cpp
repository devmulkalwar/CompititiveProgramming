#include <iostream>
using namespace std;

void fibonacci(int n, int t1, int t2) {
    if (n <= 0) { // Base case: Stop recursion when no terms are left
        return;
    }
    int t3 = t1 + t2;
    cout << t3 << " ";
    fibonacci(n - 1, t2, t3); // Recursive call with updated values
}

int main() {
    int n;
    int t1 = 0, t2 = 1;

    cout << "Enter the number of terms: " << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0; // Exit for invalid input
    }

    // Print the first two terms
    cout << t1 << " " << t2 << " ";
    // Start the Fibonacci sequence for the remaining terms
    fibonacci(n - 2, t1, t2);

    return 0;
}
