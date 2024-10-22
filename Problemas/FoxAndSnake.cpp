/*#include <iostream>

using namespace std;

int main (){
    int filas,columnas,tails=1;
    cin>>filas>>columnas;
        for (int i=0;i<filas;i++){
            for (int j=0;j<columnas;j++){
                if ((i+1)%2==1){
                    cout<<'#';
                }
                else{
                    if (j==(columnas-1)&&(tails%2==1)){
                        cout<<'#';
                    }else if (tails%2==1&&j!=(columnas-1)){
                        cout<<'.';
                    }else if (tails%2==0&&j==(0)){
                        cout<<"#";
                    }else{
                        cout<<".";
                    }

                }
            }
            if ((i+1)%2!=1){
                tails++;
            }
            cout<<endl;
        }



    return 0;
}*/