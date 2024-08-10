#include <iostream>
#include <vector>
using namespace std;

vector <int> CountSubarrays(vector <int> arr) {

    vector<int>Subarrays(arr.size(),1);

    for (int i =0;i<arr.size();i++){
        bool countedj=false,countedK=false,stop=false;
        if (i==0){
            for (int k=(i+1);arr[k]<arr[i];k++){
                Subarrays[i]++;
            }
        }

        else if (i==(arr.size()-1)){
            for (int j=(i-1);arr[j]<arr[i];j--){
                Subarrays[i]++;
            }
        }
        else {
            for (int k=(i+1),j=(i-1); !stop;){

                if (arr[i]>arr[k]&&countedK==false){
                    Subarrays[i]++;
                    if (k!=arr.size()-1){
                        k++;
                    }else{
                        countedK=true;
                    }
                }else {
                    countedK=true;
                }
                if (arr[i]>arr[j]&&countedj==false){
                    Subarrays[i]++;
                    if (j!=0){
                        j--;
                    }else countedj=true;
                }else{
                    countedj=true;
                }
                if (countedK&&countedj){
                    stop=true;
                }

            }
        }

    }



    return Subarrays;
}

/*int main() {
    vector<int>arr = {3, 4, 1, 6, 2};
    vector<int> result = CountSubarrays(arr);

    cout << "Result: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}*/