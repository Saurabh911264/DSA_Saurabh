#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot=arr[start];
    int cnt=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotIndex = start + cnt;
    swap(arr[pivotIndex],arr[start]);
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    int partitionIndex;
    partitionIndex = partition(arr,start,end);
    quickSort(arr,start,partitionIndex-1);
    quickSort(arr,partitionIndex + 1,end);
}

int main(){
    int arr[10] = {6,1,7,5,8,2,3,4,7,9};
    int size = 10;
    cout<<"Original array -> "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,size-1);
    cout<<"Sorted array -> "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}