#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (){
    string phrase;
    cin>>phrase;

    for (int i=0;i<phrase.size();i++){
        switch (tolower(phrase[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y': phrase.erase(i,1);
                i--;
                break;
        }
    }
    vector<char>phraseOut;
    for (int i=0;i<phrase.size();i++){
        phraseOut.push_back('.');
        phraseOut.push_back(tolower(phrase[i]));
    }
    for (int i=0;i<phraseOut.size();i++){
        cout<<phraseOut[i];
    }
    return 0;
}