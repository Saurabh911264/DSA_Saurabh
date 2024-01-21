#include<iostream>
using namespace std;

// int power(int a,int b){This has b iterations,it has O(b) as time complexity
//     if(b==0){
//         return 1;
//     }
//     return a*power(a,b-1);
// }

int power(int a,int b){//it has O(log(b)) as time complexity
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    if(b%2!=0){
        return a * (power(a,b/2) * power(a,b/2));
    }
    else{
        return (power(a,b/2) * power(a,b/2));
    }
}

int main(){
    int a=3,b=4;
    int ans = power(a,b);
    cout<<a<<" to the power "<<b<<" is "<<ans<<endl;
    return 0;
}