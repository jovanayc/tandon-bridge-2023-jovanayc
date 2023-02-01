// Jovanay Carter, NetID N113169951, Bridge Winter 2023,
// Homework 3, Question 1, January 28, 2023

/* Prompt: Write a program that computes how much a customer has to pay after
 * purchasing two items. The price is calculated according to the following
 * rules: 1) Buy one get on half off where the lower price item is half price,
 * 2) If the customer is club card member, additional 10% off, 3) Tax is added.
 */

#include <iostream>
using namespace std;

int main() {
  // setting variables
  double firstItem, secondItem, taxRate, bogo, basePrice, afterDiscount, totalPrice;
  double clubDiscount = .10; // 10% discount only for club card members
  char clubCard; // should be 'Y' or 'y' for "yes"; 'N' or 'n' for "no"

  //user inputs
    cout << "Enter price of first item: " << endl;
    cin >> firstItem;
    cout << "Enter price of second item: " << endl;
    cin >> secondItem;
    cout << "Does customer have a club card? (Y/N): " << endl;
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: " << endl;
    cin >> taxRate;

    //** CALCULATIONS **//
    ////Base Price
    basePrice = firstItem + secondItem;
    cout << "Base price: " << basePrice << endl;

    ////Adding bogo discount
    if (firstItem && secondItem) { // assess if two items have been listed
        if (firstItem <= secondItem) {
            afterDiscount = (firstItem / 2) + secondItem; // update afterdiscount with bogo on 1st
        } else if (secondItem < firstItem) {
            afterDiscount = firstItem + (secondItem / 2); // update after discount with bogo on 2nd
        }
    } else // if there were not two items listed, then do not apply discount and apply this statement
            cout << "Discount only applies if customer buys two items";

    ////Adding club card discount
    if (clubCard == 'Y' || 'y') {
        afterDiscount -= (afterDiscount * clubDiscount);
        cout << "Price after discounts: " << afterDiscount << endl;
    } else if (clubCard == 'N' || 'n') {
        cout << "Price after discounts: " << afterDiscount << endl;
    } else
        cout << "Please enter 'Y' or 'y' for yes, or 'N' or 'n' for no to assess if you have a Club Card" << endl;

    ////Adding Tax rate

    ////Total Price after adding discounts & taxes
        taxRate /= 100; // gives the tax in decimal form
        totalPrice = afterDiscount + (afterDiscount * taxRate);

    // outputs
    cout << "Total price: " << totalPrice << endl;

    return 0;
}