    #include <iostream>
    #include <stack>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        stack<long long> pilha;
        while (t--) {
            int fila;
            cin >> fila;
            if (fila == 1) {
                long long n;
                cin >> n;
                pilha.push(n);
            }
            else if (fila == 2) {
                if (!pilha.empty()) {
                    pilha.pop();
                }
            }
            else if (fila == 3) {
                if (pilha.empty()) {
                    cout << "Empty!" << "\n";
                } else {
                    cout << pilha.top() << "\n";
                }
            }
        }
        return 0;
    }
