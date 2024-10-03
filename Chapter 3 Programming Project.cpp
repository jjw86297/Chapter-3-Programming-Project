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

    double principal;
    double rate;
    double compound;

    cout << "What is the balance in the savings account including cents? ";
    cin >> principal;
    cout << "What is the interest rate as a decimal? ";
    cin >> rate;
    cout << "How many times is the interest compounded in the year? ";
    cin >> compound;

    amount = principal * ((1 + (rate / compound)) * pow(compound, 1.0));

    cout << "Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << compound << endl;
    cout << "Balance: $" << principal << endl;
    cout << "Interest: $" << amount - principal << endl;
    cout << "Amount in Savings: $" << amount;

    return 0;
}