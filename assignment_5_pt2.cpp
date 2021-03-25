// CSC114-4C2
// Assignment #5
// Eboni Brown

#include <iostream>
#include <iomanip>
using namespace std;

//function protypes
void showMenu();
void Cel_to_Fahr(double, double);
void Fahr_to_Cel(double, double);

int main()
{
    int choice; //menu choice
    int temp1, temp2; //for temperature inputs

    //constants for menu choice
    const int C_TO_F = 1, //for celcius to fahrenheit conversion choice
              F_TO_C = 2, //for fahrenheit to celcius conversion choice
              EXIT_CHOICE = 3;
    
    //cout << 

    do
    {
        //display the menu and get user's selection
        showMenu();
        cin >> choice;

        //validate menu selection
        while (choice < C_TO_F || choice > EXIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        //if the user doesn't want to quit, continue
        if (choice != EXIT_CHOICE)
        {
            //get two integer for temperature
            cout << "Enter two integers for range: ";
            cin >> temp1 >> temp2;

            //display conversion table 
            switch(choice)
            {
                case C_TO_F:
                    Cel_to_Fahr(temp1,temp2);
                    break;
                case F_TO_C:
                    Fahr_to_Cel(temp1, temp2);
            }
        }

    } while (choice != EXIT_CHOICE);
    return 0;
    
}

//************************************************************
 // Definition of function showMenu which displays the menu. *
 //***********************************************************

void showMenu()
{
    cout << "Enter 1 to convert from Celsius to Fahrenheit; "
         << "2 to convert from Fahrenheit to Celsius; "
         << "3 to exit: ";
}

//***********************************************************
 // Definition of function Cel_to_Fahr. The temp1 and temp2 *
 // parameters represent 2 Celcius temperatures for which   *
 // their range while be displayed in a table containing    *
 // a range of celcius temperatures and their Fahrenheit    *
 // counterparts.                                           *
 //**********************************************************

void Cel_to_Fahr(double temp1, double temp2)
{   
    int celcius;
    double fahrenheit;
    cout << "Celcius\t\tFarenheit\n";
    cout << "--------------------------\n";

    for (celcius = temp1; celcius <= temp2; celcius++)
    {
        fahrenheit = ((celcius * 1.8) +32);
        cout << celcius << "\t\t"
             << fixed << showpoint << setprecision(2) <<  fahrenheit << endl;

    }

}


//***********************************************************
 // Definition of function Fahr_to_Cel. The temp1 and temp2 *
 // parameters represent 2 Fahrenheit temperatures for      * 
 // which their range while be displayed in a table         *
 // containing a range of Fahrenheit temperatures and their *
 // Celcius counterparts.                                   *
 //**********************************************************

void Fahr_to_Cel(double temp1, double temp2)
{
    int fahrenheit;
    double celcius;
   
    cout << "Fahrenheit\tCelcius\n";
    cout << "-------------------------\n";

    for (fahrenheit = temp1; fahrenheit <= temp2; fahrenheit++)
    {
        celcius = (fahrenheit - 32) * pow(1.8, -1);
        cout << fahrenheit << "\t\t" 
             << fixed << showpoint << setprecision(2) << celcius << endl;

    }
}