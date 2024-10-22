/*#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Número de casos de prueba
    while (t--) {
        int n;
        cin >> n;  // Longitud de la cadena final
        string s;
        cin >> s;  // Cadena final

        int left = 0, right = n - 1;

        while (left < right && (s[left] != s[right])) {
            left++;
            right--;
        }

        // La longitud mínima posible es lo que queda en el centro
        cout << (right - left + 1) << endl;
    }
    return 0;
}*/