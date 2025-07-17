#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long int total = n * (n + 1) / 2;

    if (total % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";

    long long metadeDaSoma = total / 2;
    vector<int> conjunto1, conjunto2;

    for (int i = n; i >= 1; i--) {
        if (i <= metadeDaSoma) {
            conjunto1.push_back(i);
            metadeDaSoma -= i;
        } else {
            conjunto2.push_back(i);
        }
    }

    cout << conjunto1.size() << "\n";
    for (int x : conjunto1) {
        cout << x << " ";
    } 
    cout << "\n";

    cout << conjunto2.size() << "\n";
    for (int x : conjunto2) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}

