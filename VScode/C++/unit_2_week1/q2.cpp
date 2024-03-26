// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>

class Account
{
private:
    float balance;
    std::string statement;

public:
    Account(float amt)
    {
        balance = amt;
        time_t now = time(0);
        char *dt = ctime(&now);
        statement.append(dt).append("Deposit " + std::to_string(amt) + " Balance: " + std::to_string(balance) + "\n");
    }
    Account()
    {
        balance = 0.0f;
        time_t now = time(0);
        char *dt = ctime(&now);
        statement.append(dt).append("Deposit 0.0 Balance: " + std::to_string(balance) + "\n");
    }
    float getBalance()
    {
        return balance;
    }
    void setBalance(float amt)
    {
        balance += amt;
        time_t now = time(0);
        char *dt = ctime(&now);
        statement.append(dt).append("Deposit " + std::to_string(amt) + " Balance: " + std::to_string(balance) + "\n");
    }
    void widthrawl(float amt)
    {
        if (amt <= balance)
        {
            balance -= amt;
            time_t now = time(0);
            char *dt = ctime(&now);
            statement.append(dt).append("Widthrawl " + std::to_string(amt) + " Balance: " + std::to_string(balance) + "\n");
        }
        else
        {
            std::cout << "Insufficient balance!\n";
        }
    }
    void deposit(float amt)
    {
        balance += amt;
        time_t now = time(0);
        char *dt = ctime(&now);
        statement.append(dt).append("Deposit " + std::to_string(amt) + " Balance: " + std::to_string(balance) + "\n");
    }
    std::string getStatement()
    {
        return statement;
    }
};

int main()
{
    Account acc1;
    std::cout << std::fixed;
    // std::cout << acc1.getBalance() << std::endl;
    acc1.deposit(1000);
    // std::cout << acc1.getBalance() << std::endl;
    acc1.widthrawl(500);
    // std::cout << acc1.getBalance() << std::endl;
    acc1.deposit(200);
    // std::cout << acc1.getBalance() << std::endl;
    acc1.widthrawl(100);
    // std::cout << acc1.getBalance() << std::endl;
    std::cout << acc1.getStatement();

    return 0;
}