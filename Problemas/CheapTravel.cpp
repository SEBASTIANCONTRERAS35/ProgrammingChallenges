/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost_solo_individuales = n * a;

    int cost_solo_especiales = ((n + m - 1) / m) * b;

    int cost_mixto = (n / m) * b + (n % m) * a;

    int resultado = min({cost_solo_individuales, cost_solo_especiales, cost_mixto});

    cout << resultado << endl;

    return 0;
}*/