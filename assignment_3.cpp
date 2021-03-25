// CSC114-4C2
// Assignment #3
// Eboni Brown

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //constant and non-constant variables defined
    const int MONTHLY_FEE = 10.00;
    int num_of_checks, account_balance, low_balance_fee;
    double check_fee, total_fees;
    
    
    low_balance_fee = 15.00; //assign value to low balance fee
    
    //request input for beginning balance
    cout << "Please enter the beginning balance: ";
    cin >> account_balance;

    // takes account balance and takes 2 difference actions
    // depending on whether balance is negaitve or positive 
    if (account_balance < 0)
        {
            //if account is negative this message prints and program ends
            cout << "URGENT: account is overdrawn!\n";
            cout << "Press enter key to countinue . . .";
            cin.ignore();
            cin.get();
            return 0;
            
        }
    else
    {
        // if account balance is positive then program ask for number of checks 
        //deposited
        cout << "Please enter number of checks written: ";
        cin >> num_of_checks;
    } 
        
    // take number of checks and take 2 different actions based on
    // if number is positive or negative
    if (num_of_checks < 0)
    {
        //if number of checks is negative message prints and program
        //ends. if number is positive goes to next if statement
        cout << "Number of checks cannot be negative! \n";
        cout << "Press enter key to countinue . . .";
        cin.ignore();
        cin.get();
        return 0;
    }
        
    // if/else statement use to analyze which rate will be charged per
    // check based on number of check deposited
    if (num_of_checks < 20)
        check_fee = .10 * num_of_checks;
    else if (num_of_checks < 40)
        check_fee = .08 * num_of_checks;
    else if (num_of_checks < 60)
        check_fee = .06 * num_of_checks;
    else if (num_of_checks > 60)
        check_fee = .04 * num_of_checks;

    // checks that account balance is greater than 400. if not
    // user has to be charged the low balance fee
    if (account_balance < 400)
    {
        // calculates balance with low balance fee
        cout << "The bank's service fee for the month is $";
        total_fees = MONTHLY_FEE + check_fee + low_balance_fee;
        cout << fixed << setprecision(2) << total_fees; 
    }
    else 
    {
        //calculates balance without low balance fee
        cout << "The bank's service fee for the month is $";
        total_fees = MONTHLY_FEE + check_fee; 
        cout << fixed << setprecision(2) << total_fees; 
    }
    
    
    cout << endl << "Press enter key to countinue . . .";

    cin.ignore();
    cin.get();
    return 0;
}