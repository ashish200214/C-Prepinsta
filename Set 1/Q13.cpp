//sum of integer
#include<iostream>
using namespace std;

int getSum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter the number :- ";
    cin>>num;
    cout<<"The sum of the natural number is "<<getSum(num);
}