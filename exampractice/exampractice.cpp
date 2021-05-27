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
int sumOfRange(const int startVal, const int endVal);
int productOfRange(const int startVal, const int endVal);
bool isPositive(const double value);
void showMenu();

/**
 * The <code>main</code> is the driver function
 * <BR>
 * @return Returns <code>0</code> on success, any other value otherwise.
 */
int main()
{
    int choice = -1;
    int start, end;
    bool valid = 0;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the starting and ending values: \n";
            cin >> start >> end;
            cin.ignore(); //Ignore phantom line
            cout << sumOfRange(start, end) << endl;
            break;
        case 2: 
            cout << "Enter the starting and ending values: \n";
            cin >> start >> end;
            cin.ignore(); //Ignore phantom line
            cout << productOfRange(start, end) << endl;
            break;
        case 3: //isPositive
            break;
        case 0: //Exit
            break;
        default:
            cerr << "Invalid choice! Try again" << endl;
            break;
        }
    }while (choice != 0);
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

/**
 * Function <code>sumOfRange</code> adds all elements in a defined range.
 * <BR>
 * @param startVal Starting value from which addition will start.
 * @param endVal Last value to be added from the range.
  * @return Returns the sum.
 */
int sumOfRange(const int startVal, const int endVal)
{
    int sum = 0;
    for (int i = startVal; i <= endVal; i++)
        sum += i;

    assert(sum != 0); //To see if sum variable has been modified
    return sum;
}

/**
 * Function <code>productOfRange</code> computes the product of the elements in a defined range.
 * <BR>
 * @param startVal Starting value from which multiplication will start.
 * @param endVal Last value to be multiplied from the range.
 * @return Returns the result of the product.
 */
int productOfRange(const int startVal, const int endVal)
{
    int result = 1;
    for (int i = startVal; i <= endVal; i++)
        result *= i;
    return result;
}


