#include <iostream>

using namespace std;

bool logIn (String 'user', String 'pswd'); // checks if user & pswd are entered correctly

void addClass (int classes, int type); // asks user for class type

int displayList ();

bool seatsLeft (int seats);

int displaySchedule (); // array, structure

int addAnother (int classes, int type);

int main() {

   int logIn(int user, int pswd) {
        cout << "Enter your username:";
        cin >> user;
        cout << "Enter your password:";
        cin >> pswd;

        if (user && pswd = correct) // checks excel sheet
            cout << "Welcome to tiger scheduling!";
        else
            cout << "Incorrect username or password";
    }

    void addClass (int classes, int type) {
       cout << "Enter class type (aero):" // from excel
       int displayList () {
       cout << "Enter class you want to add (aero 2000):"; }
       bool seatsLeft (int seats) { // checks on seat availability
           switch (seats)
               case 1:
                   if (seats > 0)
                       addClass to array
                       break;
           case 2:
               if (seats < 0)
                   cout << "Added to waitlist";
               break;
           case 3:
               if (seats == 0)
                   cout << "Can't add class. Seats are full";
               break;

       }
       addAnother () {
           while (char = y)
               do
                   cout << "Do you want to add another class? (y or n)"
                   else 
                       displaySchedule ()
       }
   }

    return 0;
}
