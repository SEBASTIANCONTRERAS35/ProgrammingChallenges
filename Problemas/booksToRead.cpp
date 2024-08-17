#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int books;
    cin>>books;
    int minutesFree;
    cin>>minutesFree;
    int booksReaded=0;
    vector<int>booksMinutes;
    for (int i=0;i<books;i++){
        int minutes;
        cin>>minutes;
        booksMinutes.push_back(minutes);
    }

    for(int i=0;i<booksMinutes.size();i++){
        if (minutesFree-booksMinutes[i]>=0){
            booksReaded++;
            minutesFree-=booksMinutes[i];
        }else continue;
    }
    cout<<booksReaded;

    return 0;
}