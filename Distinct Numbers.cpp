#include <iostream>
#include <set>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    set<int> distintos;
    cin >> n;
    for(int i =  0 ; i < n;i++) {
        int x;
        cin >> x;
        distintos.insert(x);
    }
    cout << distintos.size() << endl;
    return  0 ;
}