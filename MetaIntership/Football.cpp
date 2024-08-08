#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
/*string winner(const vector<string>& jugadores){
    unordered_map<string,int> timesWin;
    for (const auto& jugador:jugadores){
        timesWin[jugador]++;
    }
    if (timesWin.size()>2){
        return "-1";
    }
    int golesMax=0;
    std::vector<std::pair<std::string, int>> vec(timesWin.begin(), timesWin.end());
    if (vec[0].second>vec[1].second){
        return vec[0].first;
    }else{
        return vec[1].first;
    }
}

int main() {
    int numGoals;
    vector<string> jugadores;
    cin>>numGoals;
    for (int i=0;i<numGoals;i++){
        string team;
        cin>>team;
        jugadores.push_back(team);
    }
    if (jugadores.size()==1){
        cout<<jugadores[0];
    }
    else{
       cout<< winner(jugadores);
    }

    return 0;
}
*/