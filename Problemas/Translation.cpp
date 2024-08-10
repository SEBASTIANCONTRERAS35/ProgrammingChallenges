#include <iostream>
#include <string>
using namespace std;
/*

int main() {
    string s, t;
    bool correct = true;  // Inicializa `correct` como `true`
    cin >> s >> t;

    // Verifica si las cadenas tienen el mismo tamaño
    if (s.size() != t.size()) {
        correct = false;
    } else {
        int tamano = s.size();
        // Compara cada carácter en `s` con el carácter correspondiente en `t` desde el final
        for (int i = 0; i < tamano; i++) {
            if (s[i] != t[tamano - 1 - i]) {  // Compara con el carácter opuesto en `t`
                correct = false;
                break;
            }
        }
    }

    // Imprime el resultado
    cout << (correct ? "YES" : "NO") << endl;

    return 0;
}
*/