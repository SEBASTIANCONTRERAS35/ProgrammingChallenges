/*#include <iostream>

using namespace std;
int solution(vector<int> inputArray, int k) {
    int max=-9;
    int pointer1=0;
    int pointer2=pointer1+k-1;
    while (pointer2<=inputArray.size()){
        int sum=0;
        for (int i=pointer1;i<pointer2;i++){
            sum+=inputArray[i];
        }
        if (sum>max){
            max=sum;
        }
        pointer1++;
        pointer2++;
    }
    return max;
}

int main (){
    vector<int> inputArray;
    int size;
    cin>>size;
    for (int i=0;i<size;i++){
        int number;
        cin>>number;
        inputArray.push_back(number);
    }
    int k;
    cin>>k;
    cout<<solution(inputArray, k);


    return 0;
}*/