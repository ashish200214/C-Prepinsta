#include<iostream>
using namespace std;

int reverseTheNum(int n){
    int rev=0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}

int main()
{
    int n;
    cout<<"Enter the number :- ";
    cin>>n;

    cout<<"Reverse of the number is "<<reverseTheNum(n);
}