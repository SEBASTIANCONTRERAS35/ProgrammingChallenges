#include <iostream>
#include <vector>
using namespace std;
int main(){

   int n;
   cin>>n;
    vector<vector<int>> equipos(n, vector<int>(2));
   int games=n*(n-1);
   int conflicts=0;
   for (int i=0;i<n;i++){
       for (int j=0;j<2;j++){
           cin>>equipos[i][j];
       }
   }

   for (int i=0;i<n;i++){
       for (int j=0;j<n;j++){
           if (j==i) continue;
           int colorLocal=equipos[i][0];
           int colorVisitante=equipos[j][1];
           if (colorVisitante==colorLocal){
               conflicts++;
           }
       }
   }
   cout<<conflicts;
    return 0;
}