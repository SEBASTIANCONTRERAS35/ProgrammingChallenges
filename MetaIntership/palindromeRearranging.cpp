#include <iostream>
#include <unordered_map>
#include <string>

/*bool solution(std::string inputString) {
    int sizeWord = inputString.size();
    std::unordered_map<char, int> Nletras;
    for (int i = 0; i < inputString.size(); i++) {
        Nletras[inputString[i]]++;
    }
    if (sizeWord % 2 == 1) {
        int letrasImpares = 0;
        for (auto letra : Nletras) {
            if (letra.second % 2 == 1) letrasImpares++;
        }
        if (letrasImpares > 1) {
            return false;
        } else {
            return true;
        }
    } else {
        for (auto letra : Nletras) {
            if (letra.second % 2 == 1) {
                return false;
            }
        }
        return true;
    }
}

/*int main() {
    std::string test1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbccccaaaaaaaaaaaaa";  // Test case with a palindrome
    std::string test2 = "abccba";   // Test case with even length, should be true
    std::string test3 = "abcde";    // Test case with odd length, should be false
    std::string test4 = "aabb";     // Test case with all characters appearing even times

    std::cout << "Test case 1 (" << test1 << "): " << (solution(test1) ? "True" : "False") << std::endl;
    std::cout << "Test case 2 (" << test2 << "): " << (solution(test2) ? "True" : "False") << std::endl;
    std::cout << "Test case 3 (" << test3 << "): " << (solution(test3) ? "True" : "False") << std::endl;
    std::cout << "Test case 4 (" << test4 << "): " << (solution(test4) ? "True" : "False") << std::endl;

    return 0;
}*/
