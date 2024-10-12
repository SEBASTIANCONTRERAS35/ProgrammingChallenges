/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int dragonsHurts = 0;
    vector<bool> dragons(d + 1, false); // Creando el vector de dragones con tamaño d+1

    // Si cualquier valor es 1, todos los dragones están heridos
    if (k == 1 || l == 1 || m == 1 || n == 1) {
        dragonsHurts = d;
    } else {
        // Iteramos a través de todos los dragones
        for (int i = 1; i <= d; i++) {
            // Si es divisible por k, l, m o n, lo marcamos como herido
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
                dragonsHurts++;
            }
        }
    }

    cout << dragonsHurts << endl; // Salida del número de dragones heridos
    return 0;
}*/