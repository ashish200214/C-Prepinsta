//sum of the given range
#include<iostream>
using namespace std;

int sumOfRange(int num1,int num2){
    int sum=0;
    for(int i=num1;i<=num2;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int num1,num2;
    cout<<"Enter the num1 and num2 : ";
    cin>>num1;
    cin>>num2;
    cout<<"Sum is "<<sumOfRange(num1,num2);


}