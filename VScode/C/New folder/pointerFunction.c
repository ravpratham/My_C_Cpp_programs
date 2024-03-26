#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 10

// Structure to hold customer information
struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

// Array to store customer information
struct Customer customers[MAX_CUSTOMERS];
int totalCustomers = 0;

// Function to check password authentication
int authenticate() {
    char password[20];
    printf("Enter password to access the system: ");
    scanf("%s", password);

    // Simple password check (for demonstration purposes)
    if (strcmp(password, "password123") == 0) {
        printf("Access granted!\n");
        return 1;
    } else {
        printf("Access denied!\n");
        return 0;
    }
}

// Function to create a new account
struct Customer createAccount() {
    struct Customer newCustomer;
    printf("Enter account number: ");
    scanf("%d", &newCustomer.accountNumber);
    printf("Enter name: ");
    scanf("%s", newCustomer.name);
    newCustomer.balance = 0.0;
    return newCustomer;
}

// Function to display a specific customer's account details
void displayAccount(struct Customer customer) {
    printf("\nAccount Number: %d\nName: %s\nBalance: %.2f\n", customer.accountNumber, customer.name, customer.balance);
}

// Function to display all customers and their account details
void displayAllAccounts() {
    printf("\nList of Customers:\n");
    for (int i = 0; i < totalCustomers; i++) {
        printf("%d. %s\n", i + 1, customers[i].name);
    }
}

// Function to deposit money
void deposit(struct Customer *customer, float amount) {
    customer->balance += amount;
    printf("Deposited %.2f successfully.\n", amount);
}

// Function to withdraw money
void withdraw(struct Customer *customer, float amount) {
    if (customer->balance >= amount) {
        customer->balance -= amount;
        printf("Withdrawn %.2f successfully.\n", amount);
    } else {
        printf("Insufficient funds!\n");
    }
}

int main() {
    if (authenticate() == 0) {
        return 0; // Exit if authentication fails
    }

    int choice, selectedCustomer;
    float amount;

    printf("Welcome to the Banking Management System!\n");

    while (1) {
        printf("\n1. Create a new account\n2. Display account\n3. Display all accounts\n4. Deposit\n5. Withdraw\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (totalCustomers < MAX_CUSTOMERS) {
                    customers[totalCustomers] = createAccount();
                    totalCustomers++;
                    printf("Account created successfully.\n");
                } else {
                    printf("Maximum number of customers reached.\n");
                }
                break;
            case 2:
                displayAllAccounts();
                printf("Select a customer (Enter corresponding number): ");
                scanf("%d", &selectedCustomer);
                if (selectedCustomer > 0 && selectedCustomer <= totalCustomers) {
                    displayAccount(customers[selectedCustomer - 1]);
                } else {
                    printf("Invalid selection.\n");
                }
                break;
            case 3:
                displayAllAccounts();
                break;
            case 4:
                displayAllAccounts();
                printf("Select a customer to deposit to (Enter corresponding number): ");
                scanf("%d", &selectedCustomer);
                if (selectedCustomer > 0 && selectedCustomer <= totalCustomers) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    deposit(&customers[selectedCustomer - 1], amount);
                } else {
                    printf("Invalid selection.\n");
                }
                break;
            case 5:
                displayAllAccounts();
                printf("Select a customer to withdraw from (Enter corresponding number): ");
                scanf("%d", &selectedCustomer);
                if (selectedCustomer > 0 && selectedCustomer <= totalCustomers) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    withdraw(&customers[selectedCustomer - 1], amount);
                } else {
                    printf("Invalid selection.\n");
                }
                break;
            case 6:
                printf("Thank you for using the system. Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}