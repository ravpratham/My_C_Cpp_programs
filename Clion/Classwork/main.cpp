#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;

    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    myList.insert(myList.begin() + 1, 4);

    cout << "The size of the list is: " << myList.size() << endl;

    return 0;
}