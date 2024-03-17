#include<iostream>
using namespace std;

bool checkPallindrome(string s,int st,int e){
    if(st>e){
        return false;
    }
    if(s[st]!=s[e]){
        return false;
    }
    checkPallindrome(s,st+1,e-1);
}

int main(){
    string s = "abbbba";
    bool isPall = checkPallindrome(s,0,s.length()-1);
    if(isPall){
        cout<<"String "<<s<<" is pallindrome"<<endl;
    }
    else{
        cout<<"String "<<s<<" is not pallindrome"<<endl;
    }
    return 0;
}