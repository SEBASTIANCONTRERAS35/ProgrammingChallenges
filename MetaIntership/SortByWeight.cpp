#include <iostream>
#include <vector>
using namespace std;
vector<int> solution(vector<int> &a) {
vector<int> heights;
   for (int i=0;i<a.size();i++){
       if (a[i]==-1){
           continue;
       }
       else{
           heights.push_back(a[i]);
       }
   }
    std::sort(heights.begin(), heights.end());
   int b=0;
for (int i=0;i<a.size();i++){
    if (a[i]==-1){
        continue;
    }
    else{
        a[i]=heights[b];
        b++;
    }
}


    return a;
}
/*int main() {
    // Ejemplo de entrada
    std::vector<int> a = {-1, 150, 190, 170, -1, -1, 160, 180};

    solution(a);

    // Ejemplo de impresión del resultado
    for (int height : a) {
        std::cout << height << " ";
    }
    std::cout << std::endl;

    return 0;
}*/
