//check given character is lowercase or uppercase or digits.
#include<iostream>
using namespace std;
void check(char c){
    if(c>=97 && c<=122){
        cout<<"Character is Lowercase.";
        
    }
    else if(c>=65 && c<=90){
        cout<<"Character is Uppercase.";
    }
    else{
        cout<<"Character is Digit";
    }

}

int main(){
    char ch;
    cout<<"Enter the character :- ";
    cin>>ch;

    check(ch);
}