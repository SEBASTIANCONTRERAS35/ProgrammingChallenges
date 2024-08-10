//
// Created by Emilio Contreras on 21/12/23.
//

#include "BubbleSort.h"
#include <iostream>
#include <vector>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void quickSort(vector<int>& numeros, int min, int max) {
    int i = min;
    int j = max;
    int pivote = numeros[(min + max) / 2]; // Selecciona el pivote

    while (i <= j) {
        while (numeros[i] < pivote) {
            i++;
        }
        while (numeros[j] > pivote) {
            j--;
        }

        if (i <= j) {
            swap(numeros[i], numeros[j]); // Intercambia los elementos
            i++;
            j--;
        }
    }

    if (min < j) {
        quickSort(numeros, min, j); // Ordena el subarreglo izquierdo
    }
    if (i < max) {
        quickSort(numeros, i, max); // Ordena el subarreglo derecho
    }
}


vector<int> bubbleSort(vector<int> numeros){
    int aux;
    for (int i=0;i<numeros.size();i++){
        for (int j=0;j<numeros.size()-1;j++){
            if (numeros[j]>numeros[j+1]){
                aux=numeros[j+1];
                numeros[j+1]=numeros[j];
                numeros[j]=aux;
            }

        }

    }
    return numeros;
}
/*int main(){
    vector<int> numeros={10,4};
    cout<<"BubbleSort"<<endl;
    for (int x: bubbleSort(numeros)){
        cout<<x<<" ";
    }
    cout<<endl<<"QuickSort"<<endl;
   quickSort(numeros,0,numeros.size());
   for (int i=0;i<numeros.size();i++){
       cout<<numeros[i]<<" ";
   }


    return 0;
}*/
