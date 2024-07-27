
#include <iostream>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here
int newAscii(int ascii,int max,int min,int rotationFactor){
    for (int i=1;i<=rotationFactor;i++){
        ascii++;
        if (ascii>max){
            ascii=min;
        }
    }

    return ascii;
}

string rotationalCipher(string input, int rotationFactor) {

    string output;
    for (int i=0;i<input.size();i++){
        int newChar;
        int ascii=static_cast<int>(input[i]);
        if (ascii>=65&&ascii<=90){
            newChar= newAscii(ascii,90,65,rotationFactor);
        }
        else if (ascii>=97&&ascii<=122){
            newChar=newAscii(ascii,122,97,rotationFactor);
        }
        else if (ascii>=48&&ascii<=57){
            newChar=newAscii(ascii,57,48,rotationFactor);
        }
        else {newChar=ascii;}
        output+=static_cast<char>(newChar);

    }
    return output;
}



/*int main() {

    string input_1 = "All-convoYs-9-be:Alert1.";
    int rotationFactor_1 = 4;
    string output_1 = rotationalCipher(input_1, rotationFactor_1);
        cout<<output_1;


    // Add your own test cases here

}*/
