//fibonaachi series

#include<iostream>
using namespace std;

void display(int n){
    int n1=0,n2=1,n3;
    n3=n1+n2;

    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;

    for(int i=4;i<=n;i++){
        n1=n2;
        n2=n3;
        n3=n1+n2;
        cout<<n3<<endl;
    }
}

int main(){
    int num;
    cout<<"enter the num : ";
    cin>>num;
    display(num);

}