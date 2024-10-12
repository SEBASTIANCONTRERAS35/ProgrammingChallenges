/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void dequeue(vector<int> &stack1){
    vector<int>stack2;
    int front;
    while(!stack1.empty()){
        front=stack1.back();
        stack2.push_back(front);
        stack1.pop_back();
    }
    stack2.pop_back();
    while (!stack2.empty()){
        front=stack2.back();
        stack1.push_back(front);
        stack2.pop_back();
    }
}

void enqueue(vector<int> & queue,int n){
    queue.push_back(n);
}

void print(vector<int> queue){
    cout<<queue.front();

}

/*int main() {
    int q,n,x;
    cin>>q;
    vector <int>queue;

    for (int i=0;i<q;i++){
        cin>>n;
        if (n==1){
            cin>>x;
            enqueue(queue, x);
        }
        else if (n==2){
            dequeue(queue);
        }
        else if(n==3){
            print(queue);
        }

    }
    return 0;
}*/
