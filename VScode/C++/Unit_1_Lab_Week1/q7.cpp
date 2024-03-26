#include <iostream>
#include<iomanip>
using namespace std;


int main(){
    int int_num;
    long long_num;
    char character;
    float float_num;
    double double_num;

    cin >>  int_num >> long_num >> character >> float_num >> double_num;

    cout << character << endl;

    cout << int_num << endl << long_num << endl << character << endl;

    cout << setprecision(3) << float_num << endl;

    cout << setprecision(9) << double_num << endl;

    return 0;
}