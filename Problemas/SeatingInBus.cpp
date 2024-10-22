/*#include <iostream>
#include <vector>
using namespace std;

int main (){
    int cases;
    cin>>cases;
    for (int turn=0;turn<cases;turn++){
        int passangers;
        cin>>passangers;
        vector<int>seats;
        for (int i=0;i<passangers;i++){
            int seat;
            cin>>seat;
            seats.push_back(seat);
        }
        bool empty=true;
        bool respect=false;
        vector <bool> ocupped (passangers,false);
        for (int i=0;i<seats.size();i++){
            if (empty){
                int asientoNuevo=seats[i]-1;
                ocupped[asientoNuevo]=true;
                empty=false;
            }else{
                bool pointer1;
                bool pointer2;
                int asientoNuevo=seats[i]-1;
                if (ocupped[asientoNuevo]){
                    break;
                }else{

                if (asientoNuevo!=0&&asientoNuevo!=ocupped.size()-1){
                    pointer1=ocupped[asientoNuevo-1];
                    pointer2=ocupped[asientoNuevo+1];
                    if (pointer2 || pointer1){
                        ocupped[asientoNuevo]=true;
                    }else{
                        break;
                    }
                }else if (asientoNuevo==0){
                        pointer2=ocupped[asientoNuevo+1];
                        if (pointer2){
                            ocupped[asientoNuevo]=true;
                        }else{
                            break;
                        }
                }
                else if (asientoNuevo==ocupped.size()-1){
                    pointer1=ocupped[asientoNuevo-1];
                    if (pointer1){
                        ocupped[asientoNuevo]=true;
                    }else{
                        break;
                    }
                }
                }
            }
            if (i==seats.size()-1){
                respect= true;
            }
        }
        if (respect){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }


    return 0;
}*/