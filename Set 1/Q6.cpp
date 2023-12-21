#include<iostream>
using namespace std;

void checkEvenOrOdd(int n){
    if(n%2==0){

        
        cout<<"Given number is even";
    }
    else{
        cout<<"Given number is odd";
    }
}

int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;

    checkEvenOrOdd(n);
}