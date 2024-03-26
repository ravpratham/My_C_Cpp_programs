#include<iostream>
using namespace std;

int square1(int n) 
{ 
    // Address of n in square1() is not the same as n1 in main() 
    cout << "address of n1 in square1(): " << &n << "\n"; 
  
    // clone modified inside the function 
    n *= n; 
    return n; 
} 

void geeks(){
    int n1 = 8;
    cout << &n1 << "\n";
    cout << square1(n1) << "\n";

}

int main(){
    geeks();
}