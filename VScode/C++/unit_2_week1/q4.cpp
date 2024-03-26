#include<iostream>
using namespace std;

class Test{
    private:
        int a, b;
    
    public: 
        int add(int a, int b){
            cout << a + b << endl;
            return 0;
        }

        int add(double a, double b){
            cout << a + b << endl;
            return 0;
        }
};

int main(){
    Test obj1,obj2;
    obj1.add(5,6);
    obj2.add(5.5,6.5);
    return 0;
}