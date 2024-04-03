#include <iostream>
using namespace std;

class Student{
    protected:
        string name;
        int rollNo;
    public:
        void getStudentInfo(){
            cout << "student name: " << endl;
            cin >> name;
            cout << "student roll number: " << endl;
            cin >> rollNo;
        }
};

class Marks{
    protected:
        int marks[5]; // 5 subjects
    public:
        void getMarks(){
            for (int i = 0; i < 5; i++){
                cout << "enter marks for " << i+1 << " subject: ";
                cin >> marks[i];
            }
        }
};

class Marksheet : public Student, public Marks{
    public:
        void displayMarksheet(){
            cout << name << endl;
            cout << rollNo << endl;
            for (int i = 0; i < 5; i++){
                cout << "Subject " << i + 1 << ": " << marks[i] << endl;
            }
        }
};

int main(){
    Marksheet m;
    m.getStudentInfo();
    m.getMarks();
    m.displayMarksheet();
    return 0;
}