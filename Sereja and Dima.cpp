#include <iostream>
#include <vector>
using namespace std;

int main() {
    int QuantidadeCartas;
    cin >> QuantidadeCartas;

    vector<int> Cartas(QuantidadeCartas);
    for (int i = 0; i < QuantidadeCartas; ++i) {
        cin >> Cartas[i];
    }

    int PontuacaoSereja = 0, PontuacaoDima = 0;
    int Esquerda = 0, Direita = QuantidadeCartas - 1;
    bool Alternador = true;

    while (Esquerda <= Direita) {
        int CartaEscolha;
        if (Cartas[Esquerda] > Cartas[Direita]) {
            CartaEscolha = Cartas[Esquerda];
            Esquerda++;
        } else {
            CartaEscolha = Cartas[Direita];
            Direita--;
        }

        if (Alternador) {
            PontuacaoSereja += CartaEscolha;
        } else {
            PontuacaoDima += CartaEscolha;
        }

        if (Alternador == true) {
            Alternador = false;
        } else {
            Alternador = true;
        }
        
    }

    cout << PontuacaoSereja << " " << PontuacaoDima << endl;

    return 0;
}

