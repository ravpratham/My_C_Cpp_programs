#include<iostream>
using namespace std;

void square2(int* n) 
{ 
    // Address of n in square2() is the same as n2 in main() 
    cout << "address of n2 in square2(): " << n << "\n"; 
  
    // Explicit de-referencing to get the value pointed-to 
    *n *= *n; 
}

void geeks(){
    int n2 = 8; 
    cout << "address of n2 in main(): " << &n2 << "\n"; 
    square2(&n2); 
    cout << "Square of n2: " << n2 << "\n"; 
    cout << "Change reflected in n2: " << n2 << "\n";
}

int main(){
    geeks();
    return 0;
}