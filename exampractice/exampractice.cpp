/** \file exampractice.cpp
 *  \brief     A little program to illustrate commenting of C++ source files.
 *  \details   The program illustrates a dynamic array implementation
 *  \author    Gennady Petrishchev
 *  \version   0.1
 *  \date      2020-2021
 *  \pre       First initialize the system.
 *  \bug       No bugs so far
 *  \copyright University of Nicosia.
 */
#include <iostream>
#include <cassert>

using namespace std;

//Function Prototypes
int sumOfRange(int startVal, int endVal);
int productOfRange(int startVal, int endVal);
bool isPositive(const double value);
void showMenu();

/**
 * The <code>main</code> is the driver function
 * <BR>
 * @return Returns <code>0</code> on success, any other value otherwise.
 */
int main()
{
    int choice;

    while (choice != 0) {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: //sumOfRange
            break;
        case 2: //productOfRange
            break;
        case 3: //isPositive
            break;
        case 0: //Exit
            break;
        default:
            cerr << "Invalid choice! Try again" << endl;
            break;
        }
    }
}

/**
 * Function <code>showMenu</code> displays the menu that is used from
 * the main program
 * <BR>
 */
void showMenu()
{
    cout << " 1) Sum all elements in a defined range \n";
    cout << " 2) Multiply all elements in a defined range \n";
    cout << " 3) Determine if the value is positive or negative \n";
    cout << endl;
    cout << " 0) Exit \n";
}




