#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int L, F, C;
    cin >> L >> F >> C;

    int WL, WF, WC;
    cin >> WL >> WF >> WC;

    int HL, HF, HC;
    cin >> HL >> HF >> HC;

    double unitCost;
    cin >> unitCost;

    double energyLED = (L * WL * HL * 30) / 1000.0;
    double energyFan = (F * WF * HF * 30) / 1000.0;
    double energyComputer = (C * WC * HC * 30) / 1000.0;

    double totalCost = (energyLED + energyFan + energyComputer) * unitCost;

    cout << fixed << setprecision(6) << totalCost << endl;

    return 0;
}
