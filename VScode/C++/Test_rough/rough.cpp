#include <iostream>
using namespace std;
class Solution
{
public:
  bool isPalindrome(int x)
  {
    int n = 1;
    while (x/10!=0){
      n+=1;
      x = x/10;
    }
    cout << "length of x: " << n << endl;

    int* arr = new int[n]; // Use dynamic array instead of fixed-size array
    int j = 0;
    for (int i=0; i < n; i++){
      arr[j] = x%10;
      x = x/10;
      cout << j << endl;

      j++;
      
      cout << arr[j] << endl;
    }
    delete[] arr; // Deallocate memory for the dynamic array

  }

};

int main(){
  Solution s;
  s.isPalindrome(121);
  return 0;
}