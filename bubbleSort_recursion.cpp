#include<iostream>
using namespace std;

void sortArray(int *arr,int size){
    if(size==1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,size-1);
}

int main(){
    int arr[6] = {7,6,9,1,5,2};
    int size = 6;
    cout<<"Original array -> "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sortArray(arr,size);
    cout<<"Sorted array -> "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}