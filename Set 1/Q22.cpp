//strong number
/*
for example :
145

1factorial * 4factorial *5factorial
*/


#include<iostream>
using namespace std;

int getFactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

void checkStrongOrNot(int n){
    int rem;
    int sum=0; //for multiplying
    int original=n;
    while(n!=0){
        rem=n%10;
        sum=sum+getFactorial(rem);
        n=n/10;
        
    }

    if(sum==original){
        cout<<"Strong number";
    }
    else{
        cout<<"NOt strong number";
    }
    
}

int main(){
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    checkStrongOrNot(num);

}