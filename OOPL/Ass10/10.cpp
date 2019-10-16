/*
Write a function template selection sort.
Write a program that inputs, sorts and outputs an int array and a float array. 
*/
#include<iostream>
using namespace std;
template <typename T>
void SORT(T arr[],int size){
    for(int i=0;i<size-1;i++){
        int min_idx = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx],arr[i]);
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    cout<<"Enter number of elements in array";
    int size; cin>>size;
    cout<<"1. Integer Array\n2. Float Array";
    int choice; cin>>choice;
    int arr[size];
    float arr1[size];
    switch(choice){
        case 1:
            cout<<"Enter "<<size<<" elements in the integer array";
            for (int i = 0; i < size; i++){
                cin >> arr[i];
            }
            SORT(arr,size);
            break;
        case 2:
            cout << "Enter " << size << " elements in the float array";
            for (int i = 0; i < size; i++){
                cin >> arr1[i];
            }
            SORT(arr1, size);
            break;
    }
    return 0;
}