#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
int main (){
   int cases;
   cin>>cases;
   for (int i=0;i<cases;i++){
       cout<<endl;
       int size;
       cin>>size;
       string password;
       cin>>password;
       bool secure=true;
       if (password.size()!=size){
           cout<<"NO";
           secure= false;
       }else{
           int asciiActual=0;
           bool numero=false;
           for (char character : password) {
               int ascii = static_cast<int>(character);
               if (ascii>=asciiActual){
                  asciiActual=ascii;
                   continue;
               }
               else{
                   cout<<"NO";
                   secure=false;
                   break;
               }
           }
           if (secure){
               cout<<"YES";
           }
       }

   }


    return 0;
}*/