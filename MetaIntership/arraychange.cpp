#include <iostream>
#include <vector>

using namespace std;

/*int solution(vector<int> inputArray) {
    int moves = 0;
    for (int i = 1; i < inputArray.size(); i++) {
        if (inputArray[i] > inputArray[i - 1]) {
            continue;
        } else {
            while (inputArray[i] <= inputArray[i - 1]) {
                inputArray[i]++;
                moves++;
            }
        }
    }
    return moves;
}

/*int main() {
    // Test case 1
    vector<int> test1 = {-1000, 0, -2, 0};
    cout << "Minimum moves for test1: " << solution(test1) << endl;

    // Test case 2
    vector<int> test2 = {1, 1, 1, 1};
    cout << "Minimum moves for test2: " << solution(test2) << endl;

    // Test case 3
    vector<int> test3 = {1, 2, 3, 4};
    cout << "Minimum moves for test3: " << solution(test3) << endl;

    // Test case 4
    vector<int> test4 = {1, 5, 3, 2};
    cout << "Minimum moves for test4: " << solution(test4) << endl;

    return 0;
}*/

