//prepinsta code q2
//check given character is alphabet or not.

#include<iostream>
using namespace std;

void checkAlphabetOrNot(char c){
    if ((c>=97 && c<=122) || (c>=65 && c<=90)){
        cout<<"Given character is alphabet";
    }
    else{
        cout<<"Given character is not alphabet";
    }
}

int main(){
    char ch;
    cout<<"Enter the character :- ";
    cin>>ch;

    checkAlphabetOrNot(ch);
}