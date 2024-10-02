//Jacob Walrath
//10/2/2024
//Chapter 3 Programming Project
//Math_Tutor

#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device myEngine;
    uniform_int_distribution<int> randomInt(0, 1000);

    int number1 = randomInt(myEngine);
    int number2 = randomInt(myEngine);

    cout << "What is " << number1 << " + " << number2 << "?" << endl << "Press Enter for the answer.";
    cin.get();

    cout << number1 + number2;

    return 0;
}