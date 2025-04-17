#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "*** Program to display series and find sum of 1 + 3 + 5 + ... + n ***" << endl;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Series: ";
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
        sum += i;
    }
    cout << endl;

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
