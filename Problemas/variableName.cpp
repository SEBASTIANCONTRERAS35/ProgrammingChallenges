#include <iostream>
using namespace std;
/*bool solution(string name) {
    int i=0;
    bool correct=true;
    for (char digito:name){
        if (i==0){
            if(digito>=32&&digito<58){
                correct=false;
                break;
            }else{
                i++;
                continue;
            }

        }else{
            if ((digito>96&&digito<123)||(digito>47&&digito<58)||digito==95||(digito>64&&digito<91)){
                continue;
            }else{
                correct=false;
                break;
            }
        }
    }
    return correct;
}


int main (){

    // Prueba 1
    string name1 = " var_1__Int";
    cout << "Test 1: " << (solution(name1) ? "true" : "false") << endl;

    // Prueba 2
    string name2 = "qq-q";
    cout << "Test 2: " << (solution(name2) ? "true" : "false") << endl;

    // Prueba 3
    string name3 = "2w2";
    cout << "Test 3: " << (solution(name3) ? "true" : "false") << endl;

    return 0;
}*/