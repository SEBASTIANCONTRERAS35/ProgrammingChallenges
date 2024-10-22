/*#include <iostream>

using namespace std;

int main (){
    int paradas;
    int maxPassengers=-9999999;
    cin>>paradas;
        int pasajeros=0;
    for (int i=0;i<paradas;i++){
        int cambios[2];
        int salen;
        cin>>salen;
        int entran;
        cin>>entran;
        cambios[0]=entran;
        cambios[1]=salen;
        pasajeros-=cambios[1];
        pasajeros+=cambios[0];
        if (pasajeros>maxPassengers){
            maxPassengers=pasajeros;
        }
    }
cout<<maxPassengers;

    return 0;
}*/