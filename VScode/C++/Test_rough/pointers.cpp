#include<iostream>

using namespace std;

int main(){
    int a = 3;
    int* b = &a;
    
    cout << b << endl;   
    cout << &a << endl;
    cout << *b << endl; //derefencing

    *b = 5;   //change the value
    cout << *b << endl;
    
    return 0;
} 