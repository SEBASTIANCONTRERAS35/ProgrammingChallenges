#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    unordered_map<string,int> baseDeDatos;
    cin>>n;
    for (int i=0;i<n;i++){
        string nuevoUsuario;
        cin>>nuevoUsuario;
        baseDeDatos[nuevoUsuario]++;
        if (baseDeDatos.at(nuevoUsuario)==1){
            cout<<"OK"<<endl;
        }else{
            int numero=baseDeDatos.at(nuevoUsuario)-1;
            cout<<nuevoUsuario<<numero<<endl;
        }
    }
    return 0;
}