#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> vetor(n);
    for (int i = 0; i < n; ++i)
        cin >> vetor[i];

    stack<int> pilha;
    vector<int> resultado(n);

    for (int i = 0; i < n; ++i) {
        while (!pilha.empty() && vetor[pilha.top()] >= vetor[i]) {
            pilha.pop();
        }

        if (pilha.empty()) {
            resultado[i] = 0;
        } else {
            resultado[i] = pilha.top() + 1;
        }

        pilha.push(i);
    }

    for (int i = 0; i < n; ++i) {
        cout << resultado[i] << ' ';
    }

    cout << '\n';
    return 0;
}
