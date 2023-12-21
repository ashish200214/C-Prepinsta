//Palindrome or not.

#include<iostream>
using namespace std;

int reverse(int num){
    int rem,rev=0;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}

void isPalindrome(int rev,int original){
    if(original==rev){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not Panlindrome number";
    }
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    isPalindrome(reverse(num),num);

}