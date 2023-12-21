//print equivalent ASCII values of given character.

#include<iostream>
using namespace std;

int asciiReturn(char c){
    return c;
}

int main()
{
    char ch;
    cout<<"Enter the character :- ";
    cin>>ch;

    cout<<"Ascii value is "<<asciiReturn(ch)<<endl;
}

