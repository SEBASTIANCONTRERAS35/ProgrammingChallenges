/*#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    string sum;
    cin>>sum;
    vector<int> numbers;

    for (int i=0;i<sum.size();i+=2){
        numbers.push_back(sum[i]-'0');
    }
    sort(numbers.begin(),numbers.end());
    for (int i=0;i<numbers.size();i++){
        cout<<numbers[i];
        if (i==numbers.size()-1){
            break;
        }else{
            cout<<'+';
        }
    }
    return 0;
}*/