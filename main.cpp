// Final project: Student's scheduling classes

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int displayArray(int displayClasses[6]);
int displayAll(int classes[5]);
int displayAero(int Aero);
int displayBiol(int Biol);
int displayEngr(int Engr);
int displayFinc(int Finc);
int displayMath(int Math);

int main() {

    char usnm, pswd;
    char username, password;
    char addNew =  'n', tryAgain = 'e';
    char type = ' ';
    int classes[5] = {('Aero'), ('Biol'), ('Engr'), ('Finc'), ('Math')};
    int Aero[5] = {('Fundamentals'), ('Aerodyn 1'), ('Aerodyn 2'), ('Flight dynamics'), ('Aerodyn 3')};
    int Biol[5] = {('Intro'), ('Principles'), ('Anatomy'), ('Genetics'), ('Plant biology')};
    int Engr[4] = {('Intro'), ('Thermodyn'), ('Statics'), ('Mechanics of materials')};
    int Finc[3] = {('Personal finance'), ('Principles'), ('Investments')};
    int Math[6] = {('College Algerba'), ('Precalc'), ('Calc 1'), ('Calc 2'), ('Calc 3'), ('Linear algebra')};
    int displayClasses[6];
    char class1 = ' ';

    cout << "Welcome to registration!\n"
         << "Create a username:";
    cin >> username;
    cout << "Create a password:";
    cin >> password;

do {
    cout << "Login in here.\n";
    cout << "Enter username:";
    cin >> usnm;
    cout << "Enter password:";
    cin >> pswd;
    if (((strncmp(&pswd, &password, 0)) && (strncmp(&usnm, &username, 0)))) { // both must match to continue
            cout << "Successful login!";
        }
    else {
        cout << "Unsuccessful log in.";
        cout << "Would you like to try again? Enter 't' to try again or 'e' to exit:";
        cin >> tryAgain;
        while (tryAgain == 't');
    }
}

do {
    cout << "Welcome to Tiger scheduling!"
         << "Here are your choices of class types:\n";
    displayAll(int classes[5]) // displays the 5 class types

    cout << "Enter in the class type:";
    cin >> type;
    
   switch(type) {
    case 1:
    if (type = 'Aero') {
        displayAero(int Aero[5]); // displays the classes under this type
        cout << "Which class would you like to add?";
        cin >> class1;
        int i = 5, z = 0;
        do {
            int Aero[i] = int displayClasses[z];
            ++i;
            ++z;
            while (displayClasses[z]) != '\0');
            break;
        }
    }
    case 2:
    if (type = 'Biol') {
        displayBiol(int Biol);
       cout << "Which class would you like to add?";
       cin >> class1;
        int i = 5, z = 0;
        do {
            int Biol[i] = int displayClasses[z];
            ++i;
            ++z;
            while (displayClasses[z]) != '\0');
            break;
        }
   }
   case 3:
   if (type = 'Engr') {
    displayEngr(int Engr);
    cout << "Which class would you like to add?";
    cin >> class1;
       int i = 4, z = 0;
       do {
           int Engr[i] = int displayClasses[z];
           ++i;
           ++z;
           while (displayClasses[z]) != '\0');
           break;
       }
   }
   case 4:
   if (type = 'Finc') {
    displayFinc(int Finc);
    cout << "Which class would you like to add?";
    cin >> class1;
       int i = 3, z = 0;
       do {
           int Finc[i] = int displayClasses[z];
           ++i;
           ++z;
           while (displayClasses[z]) != '\0');
           break;
       }
   }
   case 5:
   if (type = 'Math') {
    displayMath(int Math);
    cout << "Which class would you like to add?";
    cin >> class1;
       int i = 6, z = 0;
       do {
           int Math[i] = int displayClasses[z];
           ++i;
           ++z;
           while (displayClasses[z]) != '\0');
           break;
       }
   }
   }
    cout << "Do you want to add another class? (y or n)";
    cin >> addNew;
    while (addNew == 'y');
    }

    cout << "Here is your semester schedule:" << displayArray(displayClasses[]);
    return 0;
}
