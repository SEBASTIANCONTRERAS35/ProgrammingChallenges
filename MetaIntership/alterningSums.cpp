#include <iostream>
#include <vector>
using namespace std;
vector<int> solution(vector<int> a) {

    vector<int>sizes(2,0);
    for (int i=0;i<a.size();i++){
        if (i%2!=1){
        sizes[0]+=a[i];
        }else{
            sizes[1]+=a[i];
        }
    }
    return sizes;
}

int main() {
    // Example weights array
    std::vector<int> weights = {5, 10, 15, 20, 25, 30};

    // Calculate team weights
    std::vector<int> result = solution(weights);

    // Print the result
    std::cout << "Team 1 weight: " << result[0] << std::endl;
    std::cout << "Team 2 weight: " << result[1] << std::endl;

    return 0;
}