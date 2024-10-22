/*#include <iostream>
#include <string>
using namespace std;

int main (){
    string array1;
    string array2;
    cin>>array1;
    cin>>array2;
    if (array1.size()<array2.size()){
        cout<<"-1";
    }else if (array1.size()>array2.size()){
        cout<<"1";
    }else{
        bool same=false;
        for (int i=0;i<array1.size();i++){
            if (tolower(array1[i])< tolower(array2[i])){
                cout<<"-1";
                break;
            }else if (tolower(array1[i])> tolower(array2[i])){
                cout<<"1";
                break;
            }
            if (i==array1.size()-1){
                same=true;
            }
        }
        if (same){
            cout<<"0";
        }
    }

    return 0;
}¨*/