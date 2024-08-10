#include <iostream>
#include <vector>
using namespace std;

vector<string> solution(vector<string> picture) {
int size=picture.size();
    vector<string> output;
string nuevaString;
for (int i=0;i<picture[0].size()+2;i++){
    nuevaString+='*';
}
output.push_back(nuevaString);
nuevaString.clear();
for (int i=0;i<picture.size();i++){
    nuevaString+='*';
    for(int j=0;j<picture[i].size();j++){
        nuevaString+=picture[i][j];
    }
    nuevaString+='*';
    output.push_back(nuevaString);
    nuevaString.clear();
}
    for (int i=0;i<picture[0].size()+2;i++){
        nuevaString+='*';
    }
    output.push_back(nuevaString);
    return output;

}



   /* int main() {
        vector<string> picture = {"abc", "ded"};
        vector<string> result = solution(picture);

        for (const auto& line : result) {
            cout << line << endl;
        }

        return 0;
    }*/