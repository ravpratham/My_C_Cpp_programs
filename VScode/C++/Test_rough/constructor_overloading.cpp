
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
        cout << a*b << endl;

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