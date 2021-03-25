// CSC114-4C2
// Assignment #1
// Eboni Brown

#include <iostream>
using namespace std;

int main()
{
    
    double tax, tip, total;


    // meal cost amount
    const double meal_cost = 88.67;
    //variable for tax rate
    const double taxRate = 0.0675;
    //variable for tip rate
    const double tipRate = 0.2;
    
    //variable for tax amount
    tax = meal_cost * taxRate;
    //variable for tip amount
    tip = meal_cost * tipRate;
    //total cost variable
    total = tax + tip + meal_cost;

    cout << "Meal Cost: $" << meal_cost << endl;
    cout<< "Tax Amount: $" << tax << endl;
    cout<< "Tip Amount: $" << tip << endl;
    cout<< "Total Bill: $"<< total << endl;

    cout << "Press any key to countinue . . .";

    system("pause");
    return 0;

   
   
}


