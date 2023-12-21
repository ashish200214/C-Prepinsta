//area of circle
#include<iostream>
using namespace std;
const float pie=3.14;

float areaOfCircle(float radius){
    return pie*radius*radius;
}

int main(){
    float radius;
    cout<<"Enter the radius :- ";
    cin>>radius;
    cout<<"Area of circle is "<<areaOfCircle(radius);
}

