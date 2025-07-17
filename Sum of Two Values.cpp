#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Numero {
    int valor;
    int posicao;
};

bool compara(const Numero& a, const Numero& b) {
    return a.valor < b.valor;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<Numero> numeros(n);
    for (int i = 0; i < n; i++) {
        cin >> numeros[i].valor;
        numeros[i].posicao = i + 1;
    }

    sort(numeros.begin(), numeros.end(), compara);

    int esquerda = 0, direita = n - 1;
    while (esquerda < direita) {
        int soma = numeros[esquerda].valor + numeros[direita].valor;
        if (soma == x) {
            int pos1 = numeros[esquerda].posicao;
            int pos2 = numeros[direita].posicao;
            if (pos1 > pos2) swap(pos1, pos2);
            cout << pos1 << " " << pos2 << '\n';
            return 0;
        } else if (soma < x) {
            esquerda++;
        } else {
            direita--;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
