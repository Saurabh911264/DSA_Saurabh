#include<iostream>
using namespace std;

void reverse(string& s,int start,int end){
    if(start>end){
        return ;
    }
    swap(s[start],s[end]);
    start++;
    end--;
    reverse(s,start,end);
}

int main(){
    string s = "saurabh";
    int size = s.length();
    cout<<"Original string "<<s<<endl;
    reverse(s,0,size-1);
    cout<<"Reversed string "<<s<<endl;
    return 0;
}