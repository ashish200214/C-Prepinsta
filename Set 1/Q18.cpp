//leap year or not
#include<iostream>
using namespace std;

void checkLeap(int year)
{
    if(year%400==0){
        cout<<"Leap year";
    }
    else if(year%4==0 && year%100!=0){
        cout<<"Leap year";
    }
    else{
        cout<<"Not Leap year";
    }
}

int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;

    checkLeap(year);
}