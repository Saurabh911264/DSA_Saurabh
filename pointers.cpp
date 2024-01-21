#include<iostream>
using namespace std;
int main(){
    int* p ;
    int first = 110,second=900;
    p = &first;
    p = &second;
    cout<<p<<endl;
    return 0;
}