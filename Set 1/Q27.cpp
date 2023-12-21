/*
We need the following to calculate power of number -
Base : 5
Exponent : 3
Power = 53 = 125 
*/
#include<iostream>
using namespace std;
int getPower(int base,int exponent){

    int power=1;
    for(int i=1;i<=exponent;i++){
        power=power*base;
    }

    return power;
}

int main(){
    int base,exponent;
    cout<<"Enter the Base : ";
    cin>>base;

    cout<<"Enter the Exponent : ";
    cin>>exponent;

    cout<<"The power is "<<getPower(base,exponent);

}