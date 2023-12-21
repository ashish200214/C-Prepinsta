//lcm
//algorithm
//1.find max value from num1 and num2
//2.iterate from max to num1*num2
//3.loop : if(i%num1==0 && i%num2==0) 

#include<iostream>
using namespace std;

int getLcm(int num1,int num2)
{
    int max=(num1>num2)?num1:num2;
    int lcm=0;
    for(int i=max;i<=num1*num2;i++){
        if(i%num1==0 &&i%num2==0){
            lcm=i;
            break;
        }
    }
    return lcm;
}

int main(){
    int num1,num2;
    cout<<"Enter the num1 and num2 :- ";
    cin>>num1;
    cin>>num2;
    cout<<"LCM of the "<<num1<<"and "<<num2<<"is "<<getLcm(num1,num2);
}