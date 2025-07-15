#include <iostream>
#include <queue>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    queue<long long> fila;
    while (t--) {
        int x;
        cin >> x;

        if (x == 1) {
            long long n;
            cin >> n;
            fila.push(n);
        }
        else if (x == 2) {
            if (!fila.empty()) {
                fila.pop();
            }
        }
        else if (x == 3) {
            if (fila.empty()) {
                cout << "Empty!" << '\n';
            } else {
                cout << fila.front() << '\n';
            }
        }
    }
    return 0;
}