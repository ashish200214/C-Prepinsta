#include<iostream>
using namespace std;

int HCF(int num1,int num2){
    int smaller=(num1<num2)? num1:num2;
    int hcf=1;
    for(int i=1;i<=smaller;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int main()
{
    int num1,num2;
    cout<<"Enter the num1 and num2 :- ";
    cin>>num1;
    cin>>num2;

    cout<<"HCF of the given number is "<<HCF(num1,num2)<<endl;

}