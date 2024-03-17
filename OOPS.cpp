#include<iostream>
using namespace std;

class Hero{
    char level;
    int health;
    double attack;
};

int main(){
    cout<<"Size of Hero is "<<sizeof(Hero)<<endl;
    return 0;
}