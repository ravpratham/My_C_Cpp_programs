#include<iostream>
using namespace std;

class employees{
    public:
        int basicSalary, bonus, total;
    public:
        employees(){
            cin >>basicSalary;
            cin >> bonus;
            total = basicSalary + bonus;
        }
        void display(){
            cout << "your income - " << basicSalary << endl << "your bonus -" << bonus << endl << "total salary - " << total << endl;
        }
};

int main(){
    employees obj1;
    obj1.display();
    return 0;
}