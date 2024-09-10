/*The Berland State University is hosting a ballroom dance in celebration of its 100500-th anniversary! n boys and m girls are already busy rehearsing waltz, minuet, polonaise and quadrille moves.

We know that several boy&girl pairs are going to be invited to the ball. However, the partners' dancing skill in each pair must differ by at most one.

For each boy, we know his dancing skills. Similarly, for each girl we know her dancing skills. Write a code that can determine the largest possible number of pairs that can be formed from n boys and m girls.

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of boys. The second line contains sequence a1, a2, ..., an (1 ≤ ai ≤ 100), where ai is the i-th boy's dancing skill.

Similarly, the third line contains an integer m (1 ≤ m ≤ 100) — the number of girls. The fourth line contains sequence b1, b2, ..., bm (1 ≤ bj ≤ 100), where bj is the j-th girl's dancing skill.*/
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int nBoys,nGirls;
    cin>>nBoys;
    vector<int> boys;
    vector<int> girls;
    for (int i=0;i<nBoys;i++){
        int boy;
        cin>>boy;
        boys.push_back(boy);
    }
    cin>>nGirls;
    for (int i=0;i<nGirls;i++){
        int girl;
        cin>>girl;
        girls.push_back(girl);
    }
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    int pointer1=0,pointer2=0,pairs=0;
    while(pointer1<boys.size()){
        if (pointer2==girls.size()){
            pointer2=0;
        }
        if (girls[pointer2]-boys[pointer1]>1){
            pointer2=0;
            pointer1++;
        }else{
            while(girls[pointer2]-boys[pointer1]<1){
                if (boys[pointer1]-girls[pointer2]==1){
                    pairs++;
                }
                pointer2++;
            }
            pointer1++;
        }
    }
cout<<pairs;

    return 0;
}*/