//positive or negative number

#include<iostream>
using namespace std;

void checkPositiveOrNot(int no){
    if(no<0){
        cout<<"given number is negative";
    }
    else if(no==0){
        cout<<"given number is zero";
    }
    else{
        cout<<"given number is positive";
    }
}

int main(){
    int no;
    cout<<"Enter the number :- ";
    cin>>no;

    checkPositiveOrNot(no);
}