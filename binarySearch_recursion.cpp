#include<iostream>
using namespace std;

bool binarySearch(int arr[],int target,int start,int end){
    if(start>end){
        return false;
    }
    int mid = start + (end-start)/2;
    if(arr[mid]==target){
        return true;
    }
    else if(arr[mid]>target){
        binarySearch(arr,target,start,mid-1);
    }
    else{
        binarySearch(arr,target,mid+1,end);
    }
}

int main(){
    int arr[10]={2,4,5,7,8,10,12,14,16,19};
    int size = 10;
    int target = 188;
    bool found = binarySearch(arr,target,0,size-1);
    if(found){
        cout<<"Element "<<target<<" is present"<<endl;
    }
    else{
        cout<<"Element "<<target<<" is not present"<<endl;
    }

    return 0;
}