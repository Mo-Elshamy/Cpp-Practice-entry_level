#include <iostream>
using namespace std;

// Function to calculate Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "*** Display Fibonacci Series Using Recursion ***\n";
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "The Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i);
        if (i < n - 1) {
            cout << " + ";
        }
    }
    cout << endl;

    return 0;
}