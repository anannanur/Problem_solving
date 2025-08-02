#include <iostream>
using namespace std;

int main() {
    int lowRate, mediumRate, highRate, units;
    cin >> lowRate >> mediumRate >> highRate >> units;

    int totalBill = 0;

    if (units <= 100) {
        totalBill = units * lowRate;
    }
    else if (units <= 200) {
        totalBill = (100 * lowRate) + ((units - 100) * mediumRate);
    }
    else {
        totalBill = (100 * lowRate) + (100 * mediumRate) + ((units - 200) * highRate);
    }

    cout << totalBill << endl;
    return 0;
}
