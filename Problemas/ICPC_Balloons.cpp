/*#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main (){
    int cases;
    cin>>cases;
    for (int turn=0;turn<cases;turn++){
    unordered_map<char,bool> solved;
    for(char letra = 'A'; letra <= 'Z'; ++letra) {
        solved[letra]= false;
    }
        int NProblemas;
        cin>>NProblemas;
        string problemTeami;
        int balloons=0;
        cin>>problemTeami;
        for (int i=0;i<NProblemas;i++){
            if (!solved[problemTeami[i]]){
                solved[problemTeami[i]]=true;
                balloons++;
            }
            balloons++;
        }
        cout<<balloons<<endl;
    }

    return 0;
}*/