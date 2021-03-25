// CSC114-4C2
// Assignment #4
// Eboni Brown
#include <iostream>
using namespace std;

int main()
{
  

    int speed, time, count;
    
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    
    // checks that speed is not negative
    while (speed < 0)
    {
        cout << "Speed must be a positive value. ";
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
       
    }

    // time input
    cout << "How many hours has it traveled? ";
    cin >> time;

    // checks that time is not less than 1
    while (time < 1)
    {
        cout << "Hours traveled must be greater than 1. ";
        cout << "How many hours has it traveled? ";
        cin >> time;
      
    }
        
    //creates table headings
    cout << "Hour  Distance Traveled" << endl;
    cout << "------------------------" << endl;

    // for loop which outputs table data
    for (count = 1; count <= time; count++)
        cout << count << "\t" << (count * speed) << endl;

    cout << "Press enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}