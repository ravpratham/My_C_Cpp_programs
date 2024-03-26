#include<iostream>
#include <string>

using namespace std;

class Worker{
    private:
        string workerName;
        int hours_worked;
        double payRate;
        double salary;

    public:
        void input(string name, int hw, double pr){
            workerName = name;
            hours_worked = hw;
            payRate = pr; 
        }

        void display(){
            salary = payRate * hours_worked;

            cout << "Worker Name : "<< workerName <<endl;
            cout << "hours worked : "<< hours_worked <<endl;
            cout << "Pay Rate : "<< payRate <<endl;
            cout << "net salary of workers : "<< salary << endl;            
        }
};

int main()
{
    Worker  w1;
    string name = "John";
    int hw = 35;
    double pr = 9.25;
    w1.input(name,hw,pr);
    w1.display();
    return 0;
}