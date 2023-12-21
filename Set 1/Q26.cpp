/*
Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6 

The sum of these factors is 16 it is greater than 12 
So it is an Abundant number

Some other abundant numbers: 

18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120
*/

#include<iostream>
using namespace std;

int getSumOfFactor(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum;
}

void checkAbundantNo(int n){
    if(getSumOfFactor(n)>n){
        cout<<"Number is Abundant No";
    }
    else{
        cout<<"Number is not Abundant No";
    }
}

int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    checkAbundantNo(num);
}