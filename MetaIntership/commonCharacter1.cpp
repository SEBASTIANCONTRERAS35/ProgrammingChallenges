#include <iostream>
#include <unordered_map>
using namespace std;

int solution(const string& s1, const string& s2) {
    unordered_map<char, int> count1;
    unordered_map<char, int> count2;

    for (char ch : s1) {
        count1[ch]++;
    }

    for (char ch : s2) {
        count2[ch]++;
    }

    int commonCount = 0;


    for (auto pair : count1) {
        char ch = pair.first;
        int countInS1 = pair.second;
        int countInS2 = count2[ch];

        // Agregar el menor de los dos conteos
        commonCount += min(countInS1, countInS2);
    }

    return commonCount;
}
/*int main() {
    // Casos de prueba
    cout << solution("aabcc", "adcaa") << endl;
    cout << solution("xyz", "abc") << endl;
    cout << solution("aaa", "aaa") << endl;
    cout << solution("abcdef", "bdf") << endl;
    cout << solution("aabbcc", "abcc") << endl;
    cout << solution("", "abc") << endl;
    cout << solution("", "") << endl;
    cout << solution("aabbcc", "abcabc") << endl;
    cout << solution("aaaaaa", "b") << endl;
    cout << solution("abc", "aaabbbccc") << endl;

    return 0;
}*/