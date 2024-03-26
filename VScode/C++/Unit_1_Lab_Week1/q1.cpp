/*#include <iostream>
#include <iomanip> // For setw and setprecision

int main() {
    cout << "Formatting the output :\n--------------------------\n";

    double pi_value = 3.1416;

    // Display pi value
    std::cout << "The value of pi : " << pi_value << std::endl;

    // Display pi with 4 decimal places, total width 8
    std::cout << "The value of pi 4 decimal place of total width 8 : |"
              << std::setw(8) << std::fixed << std::setprecision(4) << pi_value << "|"
              << std::endl;

    // Display pi with 4 decimal places, total width 10
    std::cout << "The value of pi 4 decimal place of total width 10 : |"
              << std::setw(10) << std::fixed << std::setprecision(4) << pi_value << "|"
              << std::endl;

    // Display pi with 4 decimal places, total width 8, left-aligned
    std::cout << "The value of pi 4 decimal place of total width 8 : |"
              << std::setw(8) << std::fixed << std::setprecision(4) << std::left << pi_value << "|"
              << std::endl;

    // Display pi with 4 decimal places, total width 10, left-aligned
    std::cout << "The value of pi 4 decimal place of total width 10 : |"
              << std::setw(10) << std::fixed << std::setprecision(4) << std::left << pi_value << "|"
              << std::endl;

    // Display pi in scientific format
    std::cout << "The value of pi in scientific format is : " << std::scientific << pi_value << std::endl;

    // Status in number (0)
    std::cout << "Status in number : " << 0 << std::endl;

    // Status in alphabet (false)
    std::cout << "Status in alphabet : " << std::boolalpha << false << std::endl;

    return 0;
}
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << "Formatting the output :\n\n--------------------------\n\n";

    double pi_value = 3.1416;

    cout << "The value of pi : " << pi_value << endl;

    cout << "\n";

    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi_value << "|\n";

    cout << "\n";

    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi_value << "|\n";

    cout << "\n";

    cout << "The value of pi 4 decimal place of total width 8 : |--" << setw(6) << fixed << setprecision(4) << left << pi_value << "|\n";

    cout << "\n";

    cout << "The value of pi 4 decimal place of total width 10 : |----" << setw(6) << fixed << setprecision(4) << left << pi_value << "|\n";

    cout << "\n";

    cout << "The value of pi in scientific format is : " << scientific << pi_value << "\n";

    cout << "\n";

    cout << "Status in number : " << 0 << endl;
    
    cout << "\n";

    cout << "Status in alphabet : " << boolalpha << false << endl;

    return 0;
}