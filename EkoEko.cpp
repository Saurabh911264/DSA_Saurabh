#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid){
	long int woodSum=0;
	for(int i=0;i<n;i++){
		if(arr[i]>mid){
			woodSum+=arr[i]-mid;	
		}
		if(woodSum>=k){
			return true;
		}
	}
	return false;
}
int maxHeight(int arr[],long int n,long int k){
	int i,j,mid;
	sort(arr,arr+n);
	j=arr[n-1];
	i=arr[0];
	mid=i+(j-i)/2;
	int ans=-1;
	while(i<j){
		if(isPossible(arr,n,k,mid)){
			i=mid+1;
			ans=mid;
		}
		else{
			j=mid-1;
		}
		mid=i+(j-i)/2;
	}
	return ans;
}
int main() {
	int arr[1000000];
	long int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int result = maxHeight(arr, n, k);
    cout<<result<<endl;
	return 0;
}
