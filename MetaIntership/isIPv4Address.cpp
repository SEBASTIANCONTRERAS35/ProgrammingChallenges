#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Prototipo de la función solution
bool solution(string inputString);

/*int main() {
    // Casos de prueba
    vector<string> testCases = {
            "129380129831213981.255.255.255",  // Valido
            "255.255.255.255",  // Valido
            "256.100.50.25",  // Invalido (256 > 255)
            "192.168.1",  // Invalido (no hay 4 partes)
            "192.168.01.1",  // Valido (los ceros iniciales están permitidos)
            "192.168.1.300",  // Invalido (300 > 255)
            "abc.def.ghi.jkl",  // Invalido (no son números)
            "192.168.1."  // Invalido (parte final vacía)
    };

    for (const string& testCase : testCases) {
        cout << "Probando: " << testCase << endl;
        if (solution(testCase)) {
            cout << "La dirección IP es válida." << endl;
        } else {
            cout << "La dirección IP no es válida." << endl;
        }
        cout << endl;
    }

    return 0;
}*/

bool solution(string inputString) {
    vector<string> cadenas;
    string newString;
    bool valid=true;
    for (int i=0;i<=inputString.size();i++){
        if (inputString[i]=='.'||i==inputString.size()){
            cadenas.push_back(newString);
            newString.clear();
        }else{
            char character=inputString[i];
            newString+=character;
        }
    }
    int cadenaNumber=cadenas.size();
    if (cadenaNumber!=4){
        return false;
    }
    for (string number:cadenas){
        if (number==""){
            return false;
        }

            for (int i=0;i<number.size();i++){
                if (number[i]=='0'&&i!=number.size()-1){
                    return false;
                }
                if (number[i]<'0'||number[i]>'9'){
                    return false;

                }
            }
        int numeroActual=stoi(number);
        if (numeroActual>255){
            return false;
        }
    }
    return valid;
}

