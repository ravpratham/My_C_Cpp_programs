#include <iostream>
#include <string>

using namespace std;

const int SIZE = 3;

class Shop
{
private:
    int itemId[SIZE];
    int itemPrice[SIZE];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }

    void getItem(void)
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Enter the Id of your item: ";
            cin >> itemId[i];
            cout << "Enter the price of your item: ";
            cin >> itemPrice[i];
        }
        counter += SIZE;
    }

    void displayItemPrice()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
        }
    }
};

int main()
{
    Shop S1;
    S1.initCounter();
    S1.getItem();
    S1.displayItemPrice();
    return 0;
}
