#include<iostream>
using namespace std;

int mini(int num1,int num2){
    if(num1 <= num2){
        return num1;
    }
    return num2;
}

int main(){
    int num1,num2;
    cin>> num1>>num2;
    int minimum=mini(num1,num2);
    // int maximum=max(num1,num2);
    cout<<minimum;
    return 0;
}