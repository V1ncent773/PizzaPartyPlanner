// Pizza Party Planner
// Created by Vincent on 2026-11-18.
// Purpose: To calculate how many pizzas to order and how much the order will cost including GST (5%)
// I wrote this code myself without the assistance of AI
#include <iostream>
#include <iomanip> // fixed, setprecision
#include <cmath> // ceil()
using namespace std;
const double NUM_SLICES = 8.0; // per pizza
const double GST_TAX = 0.05; // 5% in decimal


int main() {

    string partyName;
    int numGuests = 10; // 10 guests at the party
    int slicePerGuest = 3; // 3 slices per guest
    double PricePerPizza = 18.50; // cost of a pizza (8 slices)
    int totalSlices = 30;
    int numPizzas = ceil(totalSlices / NUM_SLICES);
    double totalCost = PricePerPizza * numPizzas + 74 * GST_TAX;
    cout << fixed << setprecision(2);
    cout << "Party Name: ";
    getline(cin, partyName); // to get the full party name with spaces
    cout << "Number of Guests: ";
    cin >> numGuests;
    cout << "Slices per guest: ";
    cin >> slicePerGuest;
    cout << "Price per pizza:  ";
    cin >> PricePerPizza;
    cout << "================================================================" << endl;
    cout << "                     PIZZA PARTY PLANNER                        " << endl;
    cout << "================================================================" << endl;
    cout << "Party: " << partyName << endl;
    cout << "Guests: " << numGuests << endl;
    cout << "Slices needed: " << slicePerGuest * numGuests << endl;
    cout << "Pizzas to order: " << numPizzas << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Subtotal:         $" << PricePerPizza * numPizzas << endl;
    cout << "GST (5%):         $" << PricePerPizza * numPizzas * GST_TAX << endl;
    cout << left << setw(18) << "Total:" << "$" << totalCost << endl;
    cout << "Per guest:        $" << totalCost / numGuests << endl;
    cout << "================================================================" << endl;

    return 0;
}