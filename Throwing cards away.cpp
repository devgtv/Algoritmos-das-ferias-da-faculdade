#include <iostream>
#include <queue>
#include <vector>

using namespace std;


int main() {
    int n;
    while (cin >> n && n != 0) {
        queue<int> fila;
        vector<int> descarte;

        for (int i = 1; i <= n; ++i) fila.push(i);

        while (fila.size() > 1) {
            descarte.push_back(fila.front());
            fila.pop();
            int topo = fila.front();
            fila.pop();
            fila.push(topo);
        }
        cout << "Discarded cards:";
        if (!descarte.empty()) {
            cout << " " << descarte[0];
            for (int i = 1; i < descarte.size(); ++i) {
                cout << ", " << descarte[i];
            }
        }
        cout << endl;
        cout << "Remaining card: " << fila.front() << endl;
    }

    return 0;
}
