#include <iostream>
#include <list>

using namespace std;
class base{
    public:
    void show(){
        cout << "Base\n";
    }
};

class derived : public base {
    public:
    void show(){
        cout << "Derived\n";
    }
};

int main() {
    base baseObj;
    derived derivedObj;
    baseObj.show();
    derivedObj.show();

  return 0;
}