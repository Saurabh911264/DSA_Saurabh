#include<iostream>
using namespace std;


void merge(int *arr,int start1,int start2){
    int i = start1;
    int j = start2;

}

void mergeSort(int *arr,int start,int end){
    if(start>=end){
        return ;
    }
    int mid = start + (end-start)/2;
    
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid+1);
}


int main(){
    int arr[10]={5,8,1,0,6,9,2,3,4,7};
    int size = 10;
    cout<<"Original array -> "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,size-1);
    cout<<"Sorted array -> "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}