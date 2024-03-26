#include<iostream>
using namespace std;

class A{
    private:
        string name; 
        int id; 
        int age;
    
    public:
        A(string n,int i,int a){
            name = n;
            id = i;
            age = a;
        }

        void display(){
            cout << "name of student: " << name << endl;
            cout << "roll number of student: " << id << endl;
            cout << "age of student: " << age << endl;
        }
};

int main(){
    A obj1("Pratham", 23, 18), obj2("AJay", 25, 19);
    obj1.display();
    obj2.display();
    return 0;
}