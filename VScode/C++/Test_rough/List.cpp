#include <iostream>
#include <list>
using namespace std;

void display(list<int> l1){
    list<int> :: iterator it;
    for (it = l1.begin(); it!=l1.end(); it++){
        cout << *it << " ";
    }
}

int main(){
    
    list<int> l2(7); // empty list of length 7
    // list<int> l3(5, 100); // list of length 5 with all elements as 100
    // list<int> l4(l3); // list l4 is a copy of list l3
    int len, num;
    cout << "Enter the length of the list: ";
    cin >> len;
    list<int> l1;
    for (int i=0; i<len; i++){
        cout << "Enter the element: ";
        cin >> num ;
        l1.push_back(num);
    }
    display(l1);
    cout << endl;
    l1.pop_back(); // removes the last element
    l1.pop_front(); // removes the first element
    // Sorting
    // l1.sort();

    // Merging
    // l1.merge(l2);

    // Reverse
    // l1.reverse();

    display(l1);
    return 0;
}