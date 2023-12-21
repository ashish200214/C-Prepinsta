//automorphic or not
//square given no. if its end digit equal to original no then it is automorphic.

#include<iostream>
using namespace std;

int getSquare(int n){
    return n*n;
}

int getLastDigit(int n){
    return n%10;
}

void automorphicOrNot(int n){
    if(n==getLastDigit(getSquare(n))){
        cout<<"Number is automorphic";
    }
    else{
        cout<<"Number is not automorphic";
    }
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    automorphicOrNot(num);
}