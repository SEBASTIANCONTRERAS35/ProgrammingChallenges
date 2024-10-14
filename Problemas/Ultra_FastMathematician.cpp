#include <iostream>
#include <string>
using namespace std;

int main (){
    string number1,number2;
    cin>>number1;
    cin>>number2;
    string result;
    for (int i=0;i<number1.size();i++){
        if (number1[i]!=number2[i]){
            result+='1';
        }else{
            result+='0';
        }
    }
    cout<<result;

    return 0;
}