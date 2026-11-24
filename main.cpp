#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

// This was not made by AI. Almera made this!
using namespace std;

int main() {
    // Named constants
    const int SLICES_PER_PIZZA = 8;
    const double GST_RATE = 0.05;

    // Input variables
    string partyName;
    int numGuests;
    int slicesPerGuest;
    double pricePerPizza;

    // 1. Gather user input
    cout << "Party name: ";
    getline(cin, partyName);

    cout << "Number of guests: ";
    cin >> numGuests;

    cout << "Slices per guest: ";
    cin >> slicesPerGuest;

    cout << "Price per pizza: $";
    cin >> pricePerPizza;

    // 2. Work out total slices needed
    int totalSlices = numGuests * slicesPerGuest;

    // 3. Work out whole pizzas to order (rounding up)
    int pizzasToOrder = static_cast<int>(ceil(static_cast<double>(totalSlices) / SLICES_PER_PIZZA));

    // 4. Calculate costs
    double subtotal = pizzasToOrder * pricePerPizza;
    double gst = subtotal * GST_RATE;
    double total = subtotal + gst;
    double perGuest = total / numGuests;

    // 5. Print the formatted receipt
    cout << fixed << setprecision(2);
    cout << "============================" << endl;
    cout << "     PIZZA PARTY PLANNER" << endl;
    cout << "============================" << endl;
    cout << left << setw(18) << "Party:" << partyName << endl;
    cout << left << setw(18) << "Guests:" << numGuests << endl;
    cout << left << setw(18) << "Slices needed:" << totalSlices << endl;
    cout << left << setw(18) << "Pizzas to order:" << pizzasToOrder << endl;
    cout << "----------------------------" << endl;
    cout << left << setw(18) << "Subtotal:" << "$" << subtotal << endl;
    cout << left << setw(18) << "GST (5%):" << "$" << gst << endl;
    cout << left << setw(18) << "Total:" << "$" << total << endl;
    cout << left << setw(18) << "Per guest:" << "$" << perGuest << endl;
    cout << "============================" << endl;

    return 0;
}
