//greatest between two number
#include<iostream>
using namespace std;
void greatestBetTwo(int num1,int num2){
    if(num1>num2){
        cout<<"num1 is greatest";
    }
    else{
        cout<<"num2 is greatest";
    }
}

int main(){
    int num1,num2;
    cout<<"Enter the num1 and num2 : ";
    cin>>num1;
    cin>>num2;

    greatestBetTwo(num1,num2);
}

