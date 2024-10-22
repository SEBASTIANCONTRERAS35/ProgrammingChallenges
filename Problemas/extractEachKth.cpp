/*#include <iostream>

using namespace std;
vector<int> solution(vector<int> inputArray, int k) {
    vector<int> newVector;
    int th=1;
    for (int i=0;i<inputArray.size();i++){
        if (th!=k){
            newVector.push_back(inputArray[i]);
            k++;
        }else{
            th=1;
            continue;
        }
    }
    return newVector;
}

int main (){

// Variables para el input
    int n, k;

    // Leer el tamaño del array
    cout << "Ingresa el tamaño del array: ";
    cin >> n;

    // Leer el array de enteros
    vector<int> inputArray(n);
    cout << "Ingresa los elementos del array: ";
    for (int i = 0; i < n; i++) {
        cin >> inputArray[i];
    }

    // Leer el valor de k
    cout << "Ingresa el valor de k: ";
    cin >> k;

    // Llamar a la función solution y obtener el resultado
    vector<int> result = solution(inputArray, k);

    // Imprimir el resultado
    cout << "Array resultante: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;


    return 0;
}*/