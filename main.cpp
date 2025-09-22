/***************************************************************************************
* Title: Math Tutor V1
 * Author: Justin Kottwitz, AJ Wiese
 * Date: 2025.09.05
 * GitHub URL: https://github.com/JustinKottwitz/MathTutorV1
 * Description: Super basic math tutor that doesn't check the answer.
 **************************************************************************************/
#include <iostream> //Needed for cout and cin
using namespace std;

int main() {
    string userName;
    int answer;

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

    cout << endl;
    cout << "What is 6 + 7 = ";
    cin >> answer;   //Get answer

    cout << "V1 doesn't check the answer. Stay tuned for V2." << endl;

    return 0;
}