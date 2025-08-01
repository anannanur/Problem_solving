#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        long long P;
        cin >> N >> P;

        if (P == 0) {
            cout << "Odd" << "\n";
        }
        else if (N % 2 == 0) {
            cout << "Even" << "\n";
        } else {
            cout << "Odd" << "\n";
        }
    }
    return 0;
}
