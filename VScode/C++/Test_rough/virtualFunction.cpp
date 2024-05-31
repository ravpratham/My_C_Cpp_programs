#include <iostream>

using namespace std;

class Base // base class
{
public:
    //virtual void show()
    void show() // normal function
    {
        cout << "Base\n";
    }
};

class Derv1 : public Base // derived class 1
{
public:
    void show() { cout << "Derv1\n"; }
};

class Derv2 : public Base // derived class 2
{
public:
    void show() { cout << "Derv2\n"; }
};

int main()
{
    Base *basePointer1; // creating pointer to the Base class
    Base *basePointer2; // creating another pointer to the Base class
    Derv1 derv1Object;
    Derv2 derv2Object;
    basePointer1 = &derv1Object;
    basePointer2 = &derv2Object;
     basePointer1->show(); //without virtual it will show derived class content
     basePointer2->show(); //with virtal it will show base class content
    
    //without and with virtal it will show DERIVED CLASS content
    //derv1Object.show(); 
    //derv2Object.show();
    
    return 0;
}
