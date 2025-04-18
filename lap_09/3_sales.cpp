#include <iostream>
using namespace std;

int main() {
    float sales[3][5];
    float totalSalesman[5] = {0};
    float totalProduct[3] = {0};

    cout << "*** Print the total sales by each salesman and total sales of each item ***\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nFor Salesman " << i + 1 << ":\n";
        for (int j = 0; j < 3; j++) {
            cout << "Product " << j + 1 << " sales: ";
            cin >> sales[j][i];
            totalSalesman[i] += sales[j][i];
            totalProduct[j] += sales[j][i];
        }
    }

    cout << "\nSales Data:\n";
    cout << "          | Salesman 1 | Salesman 2 | Salesman 3 | Salesman 4 | Salesman 5 | Total Sales For Each Product|\n";
    for (int j = 0; j < 3; j++) {
        cout << "Product " << j + 1 << " |    ";
        for (int i = 0; i < 5; i++) {
            cout << sales[j][i] << "       |      ";
        }
        cout << totalProduct[j] << "\n";
    }

    cout << "Total Salesman | ";
    for (int i = 0; i < 5; i++) {
        cout << totalSalesman[i] << "       |      ";
    }
    cout << endl;

    return 0;
}
