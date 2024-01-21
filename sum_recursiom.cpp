#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
    if(size==1){
        return arr[size-1];
    }
    int sum = arr[0] + sumOfArray(arr+1,size-1);
    return sum;
}

int main(){
    int arr[6] = {2,4,5,2,8,9};
    int size = 6;
    int sum = sumOfArray(arr,size);
    cout<<"Sum of array is "<<sum<<endl;
    return 0;
}