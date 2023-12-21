//Armstrong number
#include<iostream>
using namespace std;

int getCube(int n){
    return n*n*n;
}


void checkArmstrongOrNot(int n){
    int original=n;
    int rem,sum=0;
    while(n!=0){
        rem=n%10;
        sum=sum+getCube(rem);
        n=n/10;
        
    }
    
    if(original==sum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"not Armstrong number";
    }

}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    checkArmstrongOrNot(num);
}