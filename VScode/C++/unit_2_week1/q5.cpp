#include<iostream>
using namespace std;

class Rectangle{
    private:
        int l,b;
    
    public:
        Rectangle(int length, int breadth){
            l = length;
            b = breadth;
        }

        ~ Rectangle(){
            cout << "destructed correctly";
        }

        void display(){
            cout << "area : " << l * b << endl;
            
        }
};

int main(){
    Rectangle obj(4,5);
    obj.display();
    return 0;
}