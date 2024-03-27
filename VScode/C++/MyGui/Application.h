#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
using namespace std;

// Create a namespace
namespace my_namespace
{

    // Create a class
    class my_class
    {
    public:
        // Constructor
        my_class() {
            cout << "Constructor called" << endl;
        }

        // Destructor
        ~my_class() {
            cout << "Destructor called" << endl;
        }

        // Method
        void say_hello()
        {
            std::cout << "Hello from my_class!" << endl;
        }
        
        int calculateFactorial(int n)
        {
            if(n == 0)
            {
                return 1;
            }
            else
            {
                return n * calculateFactorial(n-1);
            }
        }
    };

} // namespace my_namespace

#endif // APPLICATION_H