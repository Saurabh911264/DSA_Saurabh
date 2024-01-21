#include<iostream>
using namespace std;


bool subsetSum(int arr[],int size,int index,int sum){
    if(index<0 || sum==0){
        if(sum==0){
            return true;
        }
        else{
            return false;
        }
    }
    if(arr[index]>sum){
        return subsetSum(arr,size,index-1,sum);
    }
    return (subsetSum(arr,size,index-1,sum-arr[index]) || subsetSum(arr,size,index-1,sum));
}

int countArray(int arr[],int size,int index,int sum,int count){
    if(index<0 || sum==0){
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(arr[index]>sum){
        return count+=countArray(arr,size,index-1,sum,count);
    }
    return (countArray(arr,size,index-1,sum-arr[index],count) + countArray(arr,size,index-1,sum,count));
}
int main(){
    int size=3;
    int arr[4]={1,2,2,3};
    int index = size-1;
    int sum = 3;
    cout<<subsetSum(arr,size,index,sum)<<endl;
    return 0;
}