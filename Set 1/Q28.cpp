/*
    To find the answer to a number we will use a loop in which we start dividing the number with 1 up to the number itself and the numbers which perfectly divides the number are the factors.

For Example 100

Factors are: 1, 2, 4, 5, 10, 20, 25, 50, 100
*/

#include<iostream>
using namespace std;

void displayFactor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<", ";
        }
    }
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    displayFactor(n);
}