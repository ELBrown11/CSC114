// CSC114-4C2
// Assignment #2
// Eboni Brown
#include <iostream>
using namespace std;

int main()
{
    //non-constant variables defined
    double cookies, sugar, butter, flour; 
    // definition of ingredients as percentages of the recipe as constantant proportions 
    const double  SUGAR_PERCENT = 1.5 / 48;
    const double BUTTER_PERCENT = 1.0 / 48; 
    const double FLOUR_PERCENT = 2.75 / 48;

    
    //opening statement where cookie amount is inputted
    cout << "How many cookies do you want to make: ";
    cin >> cookies;

    //how much sugar goes in a batch of certain amount of cookies
    sugar = SUGAR_PERCENT* cookies;

    //how much butter goes in a batch of certain amount of cookies
    butter = BUTTER_PERCENT * cookies;

    //how much flour goes in a batch of certain amount of cookies
    flour = FLOUR_PERCENT * cookies;

    //statement of what you need to make a certain amount of cookies
    cout << "To make " << cookies << " cookies, you need: \n";

    //statements of how much sugar, butter and flour needed to make certain amount
    cout << sugar << " cups of sugar \n";
    cout << butter << " cups of butter \n";
    cout << flour << " cups of flour \n";

    cout << "Press any key to countinue . . .";

    cin.get();
    return 0;

}

