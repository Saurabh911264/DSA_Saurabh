/*
Problem statement
You are given an array of ‘N’ distinct integers and an integer ‘X’ representing the target sum. You have to tell the minimum number of elements you have to take to reach the target sum ‘X’.

Note:
You have an infinite number of elements of each type.
For example
If N=3 and X=7 and array elements are [1,2,3]. 
Way 1 - You can take 4 elements  [2, 2, 2, 1] as 2 + 2 + 2 + 1 = 7.
Way 2 - You can take 3 elements  [3, 3, 1] as 3 + 3 + 1 = 7.
Here, you can see in Way 2 we have used 3 coins to reach the target sum of 7.
Hence the output is 3.
Sample Input 1 :
2
3 7
1 2 3
1 0
1
Sample output 1 :
 3
 0
*/
// My solution
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> num,int x,int &count,int &calcSum,int index){
    if(calcSum==x || index<0){
        return;
    }
    if(calcSum>x){
        count--;
        calcSum=calcSum-num[index];
        index--;
        solve(num,x,count,calcSum,index);
        return;
    }
    calcSum=calcSum+num[index];
    count++;
    solve(num,x,count,calcSum,index);
}
int minimumElements(vector<int> &num, int x)
{
    sort(num.begin(),num.end());
    int index = num.size()-1;
    int count=1;
    int calcSum=num[index];
    solve(num,x,count,calcSum,index);
    if(calcSum==x){
        return count;
    }
    else{
        return -1;
    }
}

int main(){
    vector<int> arr={1,2,3};
    int x=7;
    cout<<minimumElements(arr,x)<<endl;;
    return 0;
}
