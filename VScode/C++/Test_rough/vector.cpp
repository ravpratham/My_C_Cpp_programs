#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>

void display(vector<T> vec){
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> vec1={5,4,3,2,1};
    vector<int> vec2(6, 6);
    int size = 5;

    // cout << "Enter the size of the vector: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     int num;
    //     cout << "enter the elements: ";
    //     cin >> num;
    //     vec1.push_back(num);
    // }

cout << "Vector 1: ";
display(vec1);
cout <<"\n";
cout << "Vector 2: ";
display(vec2);
cout << endl;
cout << "sorted vector 1: ";
sort(vec1.begin(), vec1.end());
display(vec1);
cout << endl;
vector<int> mergedVec(vec1.size() + vec2.size());
merge(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),mergedVec.begin());
cout << "Merged Vector: ";
display(mergedVec);

return 0;
}