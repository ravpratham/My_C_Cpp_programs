#include <iostream>

using namespace std;

class Student{
    private:
    string name;
    int regNo;

    public: 
        void getData(string n, int r){
            name = n;
            regNo = r;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Reg No: " << regNo << endl;
        }
};

class Marksheet: public Student{
    private:
    string subjName;
    int subjCode,intMarks,ExtMarks;

    public:
        void getMarks(string s, int c, int i, int e){
            subjName = s;
            subjCode = c;
            intMarks = i;
            ExtMarks = e;
        }

        void printMarksheet(){
            display();
            cout << "Subject Name: " << subjName << endl;
            cout << "Subject Code: " << subjCode << endl;
            cout << "Internal Marks: " << intMarks << endl;
            cout << "External Marks: " << ExtMarks << endl;
        }
};

int main(){
    Marksheet m1;
    m1.getData("Pratham",23);
    m1.getMarks("Maths", 101, 25, 75);
    m1.printMarksheet();
}