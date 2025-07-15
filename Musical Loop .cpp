#include <iostream>
#include <vector>
using namespace std;
// ja fiz no beecrowd ex 1089 hehe 
int main() {
    int n;


    while (cin >> n && n != 0) {
        vector<int> amostras(n);

      
        for (int i = 0; i < n; i++) {
            cin >> amostras[i];
        }

        int ContadorPicos = 0;

        // agora tem que  veficiar so picos no loop para depois armazenar.
        for (int i = 0; i < n; i++) {
        
            int anterior = (i - 1 + n) % n;
            int proximo = (i + 1) % n;

           
            if ((amostras[i] > amostras[anterior] && amostras[i] > amostras[proximo]) ||
                (amostras[i] < amostras[anterior] && amostras[i] < amostras[proximo])) {
                ContadorPicos++; 
            }
        }

      
        cout << ContadorPicos << endl;
    }

    return 0;
}
