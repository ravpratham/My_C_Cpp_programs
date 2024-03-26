#include<iostream>
using namespace std;

class A{
    public:
    int a,b;

    public:
    int add(int a, int b){
        cout << a+b << endl;
        return 0;
    }
    int add(float a, float b){
        cout << a+b << endl;
        return 0;
    }
    int add(int a, float b){
        cout << a + b << endl;
        return 0;
    }
    int add(char a, char b){
        cout << a + b << endl;
        return 0;
    }
};

int main(){
    A obj1, obj2, obj3, obj4;
    obj1.add(5,6);
    obj2.add(2.3f,3.1f);
    obj3.add(5,5.6f);
    obj4.add('c','d');
    return 0; 
}
