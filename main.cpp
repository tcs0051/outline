#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void signUp (string 'user', string 'pswd'); // asks the user to sign up & adds user/pswd to excel sheet

bool logIn (String 'user', String 'pswd'); // checks if user & pswd are entered correctly

void addClass (int classes, int type); // asks user for class type

int displayList ();

bool seatsLeft (int seats);

int displaySchedule (); // array, structure

int addAnother (int classes, int type);

int main() {

    void signUP (string 'user', string 'pswd') {
        cout << "Create a username and password\n"
        << "Enter in your new username:";
        cin >> 'user';
        cout << "Enter in your new password:";
        cin >> 'pswd';
        \\ somewhere adds to text file   
    }

   bool logIn(string 'user', string 'pswd') {
        cout << "Enter your username:";
        cin >> 'user';
        cout << "Enter your password:";
        cin >> 'pswd';

        if ('user' == 'user' && 'pswd' = 'pswd') // checks excel sheet
            cout << "Welcome to tiger scheduling!";
        else
            cout << "Incorrect username or password. Enter again.\n"; // can it go through this more than once?
    }

    void addClass (int classes, int type) {
       cout << "Enter class type (aero, biol, engr, finc, math):"; // from excel
       cin >> type;
       // reads file for list of classes under this type

       int displayList (int class) { // displays list of this class type
       cout << "Enter the class you want to add (aero 2000):";
       cin >> class;
    }

       bool seatsLeft (int seats) { // checks on seat availability for file
           switch (seats)
               case 1:
                   if (seats > 0)
                       addClass to array
                       break;
           case 2:
               if (seats <= 0)
                   cout << "Added to waitlist";
               break;
       }

       addAnother () {
           while (char = 'y')
               do
                   cout << "Do you want to add another class? (y or n)";
                   else 
                       displaySchedule (int class, int type)
       }
   }

    return 0;
}
