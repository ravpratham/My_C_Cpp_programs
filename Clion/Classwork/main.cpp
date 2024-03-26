/*#include <iostream>
using namespace std;

class A{
    public:
    int a,b;
    A(int l, int h) //constructor(parameterised)
    {
        a = l;
        b = h;
    }

    A(A &obj) //constructor(copy)
    {
        a = obj.a;
        b = obj.b;
    }
    public:
        void area()
        {
            cout << a*b;
        }
};

int main()
{
    A obj1(5,6), obj2;
    A obj2 = obj1;
    obj1.a = 5;
    obj2.b = 6;

    obj1.area();
    obj2.area();
    return 0;
}
 */

#include<iostream>
using namespace std;

class A{
public:
    int a,b;
    A(){
        a = 5;
        b = 6;
    }
    A(int l, int h) {
        a = l;
        b = h;
    }

    A(A &obj){
        a = obj.a;
        b = obj.b;
    }

    void area(){
        cout << a*b;

    }
};

int main(){
    A obj1;
    obj1.area();
    A obj2(10,7);
    obj2.area();
    A obj3 = obj1;
    obj3.area();
    return 0;
}