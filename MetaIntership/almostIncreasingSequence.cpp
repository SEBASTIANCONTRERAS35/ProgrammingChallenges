#include <iostream>
#include <vector>
#include <unordered_map>

bool solution(std::vector<int> sequence) {
    int steps = 0;
    bool increasing = false;
    int max=sequence[0];
    for (int i = 1; i < sequence.size(); i++) {
        if (sequence[i-1] >= sequence[i]||sequence[i]<=max) {
            steps++;
        }else{
            max=sequence[i];
        }
    }

    if (steps <= 1) {
        increasing = true;
    }
    return increasing;
}

/*int main() {
    std::vector<int> secuencia1 ={1, 2, 5, 3, 5};
    std::cout << "Resultado para secuencia1: " << std::boolalpha << solution(secuencia1) << std::endl;



    return 0;
}*/

