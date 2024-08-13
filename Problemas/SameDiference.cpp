#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
int main() {
    int cases;
    cin >> cases;

    for (int k = 0; k < cases; k++) {
        vector<int> cadena;
        int size;
        cin >> size;
        unordered_map<int, int> freqMap;
        int pais = 0;

        // Leer el vector y llenar el mapa
        for (int j = 0; j < size; j++) {
            int number;
            cin >> number;
            int key = number - j; // Calcula a[i] - i
            freqMap[key]++;
        }

        // Calcular el número de pares usando el mapa
        for (auto& entry : freqMap) {
            int count = entry.second;
            // Si hay count elementos con el mismo a[i] - i, se pueden formar count * (count - 1) / 2 pares
            pais += count * (count - 1) / 2;
        }

        // Imprimir el resultado para el caso de prueba actual
        cout << pais << endl;
    }

    return 0;
}
*/