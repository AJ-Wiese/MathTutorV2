/***************************************************************************************
* Title: Math Tutor V2
 * Author: Davy Tran, AJ Wiese
 * Date: 2025.09.22
 * GitHub URL: https://github.com/AJ-Wiese/MathTutorV2
 * Description: Super basic math tutor that has 4 random operators and even checks the problem!
 **************************************************************************************/
#include <iostream> //Needed for cout and cin
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    // initializing variables
    string userName;
    // random math opperator
    int mathType = (rand()%2+1);
    string mathChar;
    // random right and left numbers
    int rightNum = (rand()%10+1);
    int leftNum = (rand()%10+1);
    // answer cin holder
    int actualAnswer;
    int userAnswer;
    //math operations
    switch (mathType) {
        case 1:
            mathChar = "+";
        case 2:
            mathChar = "-";
        case 3:
            mathChar = "*";
        case 4:
            mathChar = "/";
    }
    //math tutor display
    cout << "************************************************************" << endl;
    cout << "*                      MATH TUTOR                          *" << endl;
    cout << "*              MATH TUTOR      MATH TUTOR                  *" << endl;
    cout << "*          MATH TUTOR  MATH TUTOR  MATH TUTOR              *" << endl;
    cout << "*              MATH TUTOR      MATH TUTOR                  *" << endl;
    cout << "*                      MATH TUTOR                          *" << endl;
    cout << "************************************************************" << endl;
    cout << "   Fun Math Facts:" << endl;
    cout << "   *All math teachers have cats." << endl;
    cout << "   *Circles are as easy as pi." << endl;
    cout << "   *Do NOT try dividing by zero at home." << endl;
    cout << "   *All cats have a math teacher." << endl;

    cout << "************************************************************" << endl;

    cout << "What is your name? ";
    cin >> userName;   //Get username
    cout << "Hello, " << userName << "!" << endl;   //Greet user with name
    
    cout << userName << " what is " << rightNum << mathChar << leftNum << "?" << endl;


    return 0;
}