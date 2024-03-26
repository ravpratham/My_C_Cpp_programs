#include<iostream>
#include<cmath>
using namespace std;

int main (){
    float a,b,c,s;
    
    cout << "Find the area of any triangle using Heron&#39;s Formula : \n\n";

    cout << "--------------------------------\n\n";

    cout << "Input the length of 1st side of the triangle : ";
    cin >> a;

    cout << "Input the length of 2nd side of the triangle : ";
    cin >> b;

    cout << "Input the length of 3rd side of the triangle : ";
    cin >> c;

    s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "The area of the triangle is : " << area;

    return 0;
}