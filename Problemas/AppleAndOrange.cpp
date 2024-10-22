/*#include <iostream>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int applesN=0;
    int orangesN=0;
    int treeAs=s-a;
    int treeAt=t-a;
    int treeOt=b-t;
    int treeOs=b-s;
    for (int i=0;i<apples.size();i++){
        if (a+apples[i]>=s&&a+apples[i]<=t){
            applesN++;
        }
    }
    for (int i=0;i<oranges.size();i++){
        if (b+oranges[i]<=t&&b+oranges[i]>=s){
            orangesN++;
        }
    }
    cout<<applesN<<endl;
    cout<<orangesN<<endl;
}

int main() {
    // Variables para el inicio y fin de la casa de Sam
    int s, t;
    cin >> s >> t;

    // Variables para la ubicación del árbol de manzanas y naranjas
    int a, b;
    cin >> a >> b;

    // Número de manzanas y naranjas (no se usa explícitamente)
    int m, n;
    cin >> m >> n;

    // Vector para almacenar las distancias de las manzanas
    vector<int> apples(m);
    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }

    // Vector para almacenar las distancias de las naranjas
    vector<int> oranges(n);
    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    // Llamar a la función para contar manzanas y naranjas en la casa
    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}*/