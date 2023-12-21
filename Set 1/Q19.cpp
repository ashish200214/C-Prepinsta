//given number is prime or not.
#include<iostream>
using namespace std;

void primeOrNot(int n){
    int check=1;
    bool isPrime=true;

    if(n<2){
        isPrime=false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<"given number is prime";
    }
    else{
        cout<<"given number is not prime";
    }
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    primeOrNot(num);
}