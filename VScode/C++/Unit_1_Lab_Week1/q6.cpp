#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b,value;
    cin >> a >> b;
    value = a + b;
    string str_value = to_string(value);
    cout << value << endl;
    cout << str_value.length();
    return 0;
}