#include <iostream>

using namespace std;

class Book{
public:
    string title;
    string author;
    int price;

public:
    Book(){
        title = "maths";
        author = "bala";
        price = 500;
    }
    Book(string t,string a,int p){
        title = t;
        author = a;
        price = p;
    }
    Book(Book &obj){
        cout << "copy constructor !!\n";
        title = obj.title;
        author = obj.author;
        price = obj.price;
    }

    void display(){
    cout << "number of attributes are:" << endl;
    cout << title << "\n" << author << "\n" << price << endl;
    }
};
int main() {
    Book B1; //default constr
    Book B2("oodp","Pratham",1000); //parameterized constr

    B1.display();
    B2.display();
    Book B3(B1);
    B3.display();
    return 0;
}