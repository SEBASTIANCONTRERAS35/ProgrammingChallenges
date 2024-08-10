//Another version of commonCharacter where the output is the number of letters in common in both strings
#include <iostream>
#include <unordered_map>
using namespace std;
/*bool check(unordered_map<char, int> letters,char letter){
    if (letters.find(letter)!=letters.end()){
        return true;
    }
    return false;
}
int solution(string s1, string s2) {
    unordered_map<char, int> letters;
    int output=0;
    for (int i=0;i<s1.size();i++){
        char letter=s1[i];
        if(!check(letters, letter)){
            for (int j=0;j<s2.size();j++){
                if (s2[j]==letter){
                    if (check(letters,letter)){
                        letters[letter]++;
                        continue;
                    }else letters[letter]=2;
                }
            }
        }
        else{
            letters[letter]++;
        }

    }
    for (auto num:letters){
        output+=num.second;
    }
    return output;
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