//greatest between three number;
#include<iostream>
using namespace std;

void greatestBetThree(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
        cout<<"Greatest number is num1";
    }
    else if(num2>num1 && num2>num3){
        cout<<"Greatest number is num2";
    }
    else{
        cout<<"Greatest number is num3";
    }
}

int main(){
    int num1, num2,num3;
    cout<<"enter the num1,num2 and num3:- ";
    cin>>num1;
    cin>>num2;
    cin>>num3;

    greatestBetThree(num1,num2,num3);
}