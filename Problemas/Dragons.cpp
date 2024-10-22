/*#include <iostream>
#include <unordered_map>
using namespace std;

int main (){
int fuerzaKirito,n;
cin>>fuerzaKirito>>n;
unordered_multimap<int,int> dragons;
    for (int i = 0; i < n; i++) {
        int newDragon, forcesWin;
        cin >> newDragon >> forcesWin;
        dragons.insert(make_pair(newDragon, forcesWin));
    }

    for (auto dragon = dragons.begin(); dragon != dragons.end(); ) {
        if (dragon->first < fuerzaKirito) {
            fuerzaKirito+=dragon->second;
             dragons.erase(dragon);
             dragon=dragons.begin();

        } else {
            ++dragon;
        }
    }
if (dragons.empty()){
    cout<<"YES";
}else{
    cout<<"NO";
}

    return 0;
}*/