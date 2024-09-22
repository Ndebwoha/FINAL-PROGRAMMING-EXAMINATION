#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double moneyLoaded, totalCost, balance, remainingBalance;
    int waterUnits;

    cout << "Enter the amount of money loaded onto the account (in UGX): ";
    cin >> moneyLoaded;

    cout << "Enter the number of water units consumed: ";
    cin >> waterUnits;

    if (waterUnits <= 10) {
        totalCost = waterUnits * 150;
    } else if (waterUnits <= 20) {
        totalCost = 10 * 150 + (waterUnits - 10) * 175;
    } else {
        totalCost = 10 * 150 + 10 * 175 + (waterUnits - 20) * 200;
    }


    totalCost *= 1.15; // Applying a 15% surcharge

    if (moneyLoaded >= totalCost) {
        balance = moneyLoaded - totalCost;
        cout << fixed << setprecision(2);
        cout << "Transaction Successful. Remaining Balance: " << balance << " UGX" << endl;
    } else {
        remainingBalance = totalCost - moneyLoaded;
        cout << "Insufficient balance. Remaining Balance before usage: " << remainingBalance << " UGX" << endl;
    }

    return 0;
}
