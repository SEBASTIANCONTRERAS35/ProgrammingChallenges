#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
/*
// Función para encontrar la longitud mínima de salto
int findMinimalJumpLength(const vector<int>& obstacles) {
    unordered_set<int> obstacleSet(obstacles.begin(), obstacles.end());

    int jumpLength = 1;
    while (true) {
        bool valid = true;
        for (int i = jumpLength; i <= 1000; i += jumpLength) {
            if (obstacleSet.find(i) != obstacleSet.end()) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return jumpLength;
        }
        jumpLength++;
    }
}

int main() {
    // Ejemplo de entrada
    vector<int> obstacles = {5, 3, 6, 7, 9};

    // Llamada a la función para encontrar la longitud mínima de salto
    int minimalJumpLength = findMinimalJumpLength(obstacles);

    // Imprimir el resultado
    cout << "The minimal jump length to avoid all obstacles is: " << minimalJumpLength << endl;

    return 0;
}
*/


