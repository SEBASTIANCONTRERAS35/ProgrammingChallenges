#include <iostream>
#include <string>
using namespace std;


int main (){
    int letters;
    cin>>letters;
    string codefroces="codeforces";
    for (int i=0;i<letters;i++){
        char letter;
        cin>>letter;
        bool existe= false;
        for (int j=0;j<codefroces.size();j++){
            if (codefroces[j]==letter){
                existe=true;
            }
        }
        cout<<endl;
        if (existe){
            cout<<"YES";
        }else cout<<"NO";
    }


    return 0;
}