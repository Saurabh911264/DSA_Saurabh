#include<iostream>
using namespace std;

bool isPresent(int arr[],int size,int target){
    if(size==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    bool ans = isPresent(arr+1,size-1,target);
    return ans;
}

int main(){
    int arr[6] = {2,5,8,9,5,3};
    int size = 6;
    int target = 2;
    bool ans = isPresent(arr,size,target);
    if(ans){
        cout<<"Element "<<target<<" is found"<<endl;
    }
    else{
        cout<<"Element "<<target<<" is not found"<<endl;
    }
    return 0;
}