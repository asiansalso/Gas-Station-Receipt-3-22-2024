#include <iostream>
#include <string>
using namespace std;

const double REGULAR_GAS_PRICE = 4.00;
const double PREMIUM_GAS_PRICE = 5.00;

int main() {
   string firstName, lastName, creditCardName, gasType;
   int expYear, expMonth;
   long long int creditCardNumber;
   double gallons, totalCost;

   cout << "Enter first name: ";
   cin >> firstName;

   cout << "Enter last name: ";
   cin >> lastName;

      cout << "Enter credit card name: ";
   cin >> creditCardName;

   cout << "Enter expiration year: ";
   cin >> expYear;

   while (expYear < 2023){
      cout << "Invalid expiration year.";
      cin >> expYear;
   }
   cout << "Enter credit card expiration month: ";
   cin >> expMonth;

   cout << "Enter credit card number: ";
   cin >> creditCardNumber;
   
   cout << "Enter type of gas (regular, premium): ";
   cin >> gasType;

   cout << "Enter number of gallons purchased: ";
   cin >> gallons;

   if (gasType == "regular") {
      totalCost = gallons * REGULAR_GAS_PRICE;
   }  
   else if (gasType == "premium"){
      totalCost = gallons * PREMIUM_GAS_PRICE;
   }
      else{
         cout << "Invalid gas type. Enter 'regular' or 'premium'." << endl;
      }

   cout << "Customer last name: " << lastName << endl;
   cout << "Credit card name: " << creditCardName << endl;
   cout << "Number of gallons: " << gallons << endl;
   cout << "Total cost: " << totalCost << endl;

   string printReceipt;
   cout << "Do you want to print a receipt? (Yes or No): ";
   cin >> printReceipt;

    if (printReceipt == "Yes") {
        cout << "Printing receipt..." << endl;
    } 
    else if (printReceipt == "No") {
        cout << "Thank you, see you again!" << endl;
    } 
    else {
        cout << "Invalid input. Please enter 'Yes' or 'No'." << endl;
        return 1;
    }

    return 0;
   }
 