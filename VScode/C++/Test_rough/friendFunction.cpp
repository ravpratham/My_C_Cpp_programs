#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        friend Complex sumComplex(Complex o1, Complex o2);

    // friend function lets another function which is not present inside the class access the private members of the class.

        void getNumber(){
            cout << "The number is " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main(){
    Complex c1,c2;
    c1.setNumber(1, 4);
    c1.getNumber();
    
    c2.setNumber(5, 7);
    c2.getNumber();
    
    Complex sum = sumComplex(c1, c2);
    sum.getNumber();
    return 0;
}