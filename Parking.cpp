#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main () {
    int n;
    cin >> n;

    while(n--) {
        int Qlojas;
        cin >> Qlojas;
        vector<int> Lojas(Qlojas);
        for(int i = 0; i < Qlojas; i++) {
            cin >> Lojas[i];
        }
        int Menor = Lojas[0];
        int Maior = Lojas[0];
        for(int i = 1; i < Qlojas; i++) {
            if (Lojas[i] < Menor) Menor = Lojas[i];
            if (Lojas[i] > Maior) Maior = Lojas[i];
        }
        int D = abs(Maior - Menor) * 2;

        cout << D << endl;
    }

    return 0;
}
