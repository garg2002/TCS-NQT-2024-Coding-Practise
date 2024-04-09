#include<iostream>
using namespace std;

int main()
{
    float PI = 3.1416;
    float diameter ;
    cout<<"Enter the diameter of circle: ";
    cin>>diameter;

    float radius = diameter/2;

    double area ;

    area = PI * radius * radius;

    cout<<"Area of Circle is : "<<area;
    return 0;
}