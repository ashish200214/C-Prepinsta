//prefect or not
/*
for ex. 
num=6
no. from 1 to num-1 which is perfectly divisible to number and addition of no matches the original one.
*/
#include<iostream>
using namespace std;
void checkPrefectOrNot(int n)
{
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"Number is prefect";
    }
    else{
        cout<<"Number is not Perfect";
    }
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    checkPrefectOrNot(num);
}