#include <iostream>
using namespace std;

int main(){
    int var = 1;
    int swp;
    int *n = &var;
    cout << n << endl;
    cout << &n << endl;
    cout << *n << endl;
    cout << &var << endl;
    
    cout << swp << endl;

    return 0;
}