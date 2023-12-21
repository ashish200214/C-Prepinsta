//Harshad no. for ex. 153 =>1+5+3 = 9 if this 9 is divisible to 153 then harshad no.
#include<iostream>
using namespace std;

int getSumOfDigit(int n){
    int sum=0,rem;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}

void checkHarshadOrNot(int n){
    if(n%getSumOfDigit(n)==0){
        cout<<"Harshad Number";
    }
    else{
        cout<<"Not Harshad Number";
    }
}

int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    checkHarshadOrNot(num);
}