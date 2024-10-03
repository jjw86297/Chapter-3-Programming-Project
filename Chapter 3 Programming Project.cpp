//Jacob Walrath
//10/2/2024
//Chapter 3 Programming Project
//Interest_Earned

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double amount;
    double change1;
    double change2;
    //These variables is simply used to change up the equation a little bit, as I couldn't get "pow" to work correctly.

    double principal;
    double rate;
    double compound;

    cout << "What is the balance in the savings account including cents? ";
    cin >> principal;
    cout << "What is the interest rate as a decimal? ";
    cin >> rate;
    cout << "How many times is the interest compounded in the year? ";
    cin >> compound;

    change1 = 1 + (rate / compound);
    change2 = pow(change1, compound);
    amount = principal * change2;

    cout << "Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << compound << endl;
    cout << "Balance: $" << principal << endl;
    cout << "Interest: $" << amount - principal << endl;
    cout << "Amount in Savings: $" << amount;

    return 0;
}