//Check Vowel or not ...
#include<iostream>
using namespace std;

void vowelOrNot(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' 
    || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        cout<<"given is vowel";    
    }
    else{
        cout<<"given is consonant";
    }


}

int main()
{
    char n;
    cout<<"Enter the character :- ";
    cin>>n;
    vowelOrNot(n);
}