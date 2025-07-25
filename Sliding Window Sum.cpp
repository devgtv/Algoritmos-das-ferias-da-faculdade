#include <iostream>
#include <vector>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    long long int x,a,b,c;
    cin >> x >> a >> b >> c;

    vector<int> bomba(n);
    bomba[0] = x;
    for(int i = 1; i < n;i++) {
        bomba[i] = (a * bomba[i-1] + b) % c;
    }


    long long int soma = 0;
    for(int i = 0 ; i < k;i++) {
        soma +=bomba[i];
    }
 
long long int  resultado = soma;
for(int i = k; i < n;i++) {
    soma = soma - bomba[i-k] + bomba[i];
    resultado ^=soma;
}
cout << resultado << endl;
return 0;
}
