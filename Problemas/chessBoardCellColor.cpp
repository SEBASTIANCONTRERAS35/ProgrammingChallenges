#include <iostream>
#include <string>

using namespace std;

/*
bool solution(string cell1, string cell2){
    int c1,c2;
    int f1=(static_cast<int>(cell1[1])-'0')-1;
    int f2=(static_cast<int>(cell2[1])-'0')-1;
        switch (cell1[0]) {
            case 'A': c1 = 0; break;
            case 'B': c1 = 1; break;
            case 'C': c1 = 2; break;
            case 'D': c1 = 3; break;
            case 'E': c1 = 4; break;
            case 'F': c1 = 5; break;
            case 'G': c1 = 6; break;
            case 'H': c1 = 7; break;
            default: c1 = -1; // Valor para manejar entradas no válidas, aunque no se espera que haya.
        }

        switch (cell2[0]) {
            case 'A': c2 = 0; break;
            case 'B': c2 = 1; break;
            case 'C': c2 = 2; break;
            case 'D': c2 = 3; break;
            case 'E': c2 = 4; break;
            case 'F': c2 = 5; break;
            case 'G': c2 = 6; break;
            case 'H': c2 = 7; break;
            default: c2 = -1; // Valor para manejar entradas no válidas, aunque no se espera que haya.
        }
if (c1%2==0){
   if (c2%2==0){
       if (f1%2==0){
           if (f2%2==0){
               return true;
           }else{
               return false;
           }
       }else{
           if (f2%2==1){
               return true;
           }else{
               return false;
           }
       }
   }else{
       if (f1%2==1){
           return true;
       }else return false;
   }
}else{
    if (c2%2==1){
        if (f1%2==1){
            if (f2%2==1){
                return true;
            }else{
                return false;
            }
        }else return false;
    }else return false;
}

}

int main() {
    // Prueba 1
    string cell1 = "A1";
    string cell2 = "B2";
    cout << "Test 1: " << (solution(cell1, cell2) ? "true" : "false") << endl;

    // Prueba 2
    string cell3 = "B2";
    string cell4 = "D4";
    cout << "Test 2: " << (solution(cell3, cell4) ? "true" : "false") << endl;

    // Prueba 3
    string cell5 = "E5";
    string cell6 = "H8";
    cout << "Test 3: " << (solution(cell5, cell6) ? "true" : "false") << endl;

    // Prueba 4
    string cell7 = "A1";
    string cell8 = "B2";
    cout << "Test 4: " << (solution(cell7, cell8) ? "true" : "false") << endl;

    return 0;
}
*/