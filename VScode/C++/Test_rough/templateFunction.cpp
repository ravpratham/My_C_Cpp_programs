#include <iostream>

using namespace std;

template<typename T>

T function(T value){
    cout << value << endl;
}

int main(){
    function(5);
    function("Hello");
    function(5.5f);
    return 0;
}