#include <iostream>
using namespace std;

class Base{
    private:
        int a,b,c;
    public:
        Base(){
            a = 0, b = 0, c = 0; 
        }

        void getValues(int x, int y, int z){
            a = x;
            b = y;
            c = z;         
        }
};

class Derived: public Base{
    private:
        int d,e,f;
    public:
        Derived(){
            d = 0, e = 0, f = 0; 
        }

        void getValues(int x, int y, int z){
            d = x;
            e = y;
            f = z;         
        }
};
