#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, int, greater<string>> marks;
    marks["Pratham"] = 98;
    marks["Rahul"] = 89; 
    marks["Rohan"] = 90; 
    marks.insert({{"Rohit", 78}, {"Raj", 88}}); // insert function can also be used to insert elements in the map
    map<string, int> :: iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "-------------------------------------------------\nAfter removing Rahul\n-------------------------------------------------\n";
    iter = marks.find("Rahul");
    marks.erase(iter); // remove function is used to remove elements from the map using an iterator
    for (iter = marks.begin(); iter != marks.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    
    return 0;
}