#include <vector>
#include <iostream>

using namespace std;
bool unordered(vector<int> a,vector<int> b){
   if (a.size()!=b.size()) {
       return false;
   }else{
       int notInPlace=0;
       for (int i=0;i<a.size();i++){
           if (a[i]!=b[i]){
               notInPlace++;
           }
       }
       if (notInPlace%2==0&&notInPlace<=2){
           return true;
       }else return false;
   }
}
bool solution(vector<int> a, vector<int> b) {
    if (!unordered(a,b)){
        return false;
    }else{
        int indexa = 0;
        while(!a.empty()&&!b.empty()) {
            int target = a[0];
            auto it = std::find(b.begin(), b.end(), target);
            if (it != b.end()) {
                int indexb = std::distance(b.begin(), it);
                b.erase(b.begin() + indexb);
                a.erase(a.begin() + indexa);

            } else {
                return false;
            }

        }
    }


    return true;
}

/*int main()
{
    std::vector<int> a ;
    std::vector<int> b;
    a= {832, 998, 148, 570, 533, 561, 894, 147, 455, 279};
    b= {832, 570, 148, 998, 533, 561, 455, 147, 894, 279};

     bool result = solution(a, b);

    std::cout << (result ? "true" : "false") << std::endl;
    return 0;
}*/