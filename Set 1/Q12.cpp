#include<iostream>
using namespace std;

int getDigit(int num){
    int count=0,rem;
    while(num!=0){
        count++;
        num=num/10;

    }
    return count;
}

int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;
    cout<<"the digit is "<<getDigit(num);
}