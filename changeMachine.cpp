// CSC2034
// 02/22/2024
//Richard Sharp

#include <iostream>

using namespace std;

int main() {
    int totalPennies;

    cout << "Enter the total number of pennies: ";
    cin >> totalPennies;

    // Calculate denominations using modulus for remainder
    int dollars = totalPennies / 100;
    totalPennies %= 100;
    int halfDollars = totalPennies / 50;
    totalPennies %= 50;
    int quarters = totalPennies / 25;
    totalPennies %= 25;
    int dimes = totalPennies / 10;
    totalPennies %= 10;
    int nickels = totalPennies / 5;
    int pennies = totalPennies % 5;

    // Print with conditional expressions for compact output
    cout << "Your change is:" << endl;
    dollars > 0 ? cout << dollars << " Dollar(s)\n" : cout << "";
    halfDollars > 0 ? cout << halfDollars << " Half-Dollar(s)\n" : cout << "";
    quarters > 0 ? cout << quarters << " Quarter(s)\n" : cout << "";
    dimes > 0 ? cout << dimes << " Dime(s)\n" : cout << "";
    nickels > 0 ? cout << nickels << " Nickel(s)\n" : cout << "";
    pennies > 0 ? cout << pennies << " Penny(ies)\n" : cout << "";

    return 0;
}
