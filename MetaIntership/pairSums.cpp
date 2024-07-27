#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// ... Aquí va tu implementación de las funciones
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
// Add any helper functions you may need here


int numberOfWays(vector<int>& arr, int k) {
    int ways=0;
    int x;
    // Write your code here
    unordered_map<int, int> myMap;
    for (int i=0;i<arr.size();i++){
        myMap[arr[i]]++;
    }
    for (auto it = myMap.begin(); it != myMap.end();) {

        x = k - it->second;
        auto j = myMap.find(x);
        if (x != (k / 2)) {
            if (j != myMap.end()) {
                ways += j->second;
                myMap.erase(j);
                int initial = -x + k;
                auto g = myMap.find(initial); // Encuentra la posición de 'initial' en el mapa
                if (g != myMap.end()) {
                    myMap.erase(g); // Borra 'initial' si se encuentra en el mapa
                }
            } else {
                auto g = myMap.find(k-x);
                myMap.erase(g);
            }
        } else {
            if (j->second == 1) {
                myMap.erase(j);
            } else {
                int combinations = (factorial(j->second)) / (factorial(2)) * (factorial((j->second) - 2));
                ways += combinations;
                myMap.erase(j);
            }
        }
    }
    return ways;
}












// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.

void printInteger(int n) {
    cout << "[" << n << "]";
}

int test_case_number = 1;

void check(int expected, int output) {
    bool result = (expected == output);
    const char* rightTick = u8"\u2713";
    const char* wrongTick = u8"\u2717";
    if (result) {
        cout << rightTick << "Test #" << test_case_number << "\n";
    }
    else {
        cout << wrongTick << "Test #" << test_case_number << ": Expected ";
        printInteger(expected);
        cout << " Your output: ";
        printInteger(output);
        cout << endl;
    }
    test_case_number++;
}

/*int main() {

    int k_1 = 6;
    vector <int> arr_1{1, 2, 3, 4, 3};
    int expected_1 = 2;
    int output_1 = numberOfWays(arr_1, k_1);
    check(expected_1, output_1);

    int k_2 = 6;
    vector <int> arr_2{1, 5, 3, 3, 3};
    int expected_2 = 4;
    int output_2 = numberOfWays(arr_2, k_2);
    check(expected_2, output_2);

    // Add your own test cases here

}*/