#include <iostream>
using namespace std;

class Base{
    int x;

public:
    virtual void fun() = 0;

    int getx(){ return x;}

};

class Derived: public Base{
    int y;

public:

};

int main(){
    Derived d;
    d.fun();


return 0 ;
}