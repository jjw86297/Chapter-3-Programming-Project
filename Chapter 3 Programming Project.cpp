//Jacob Walrath
//10/2/2024
//Chapter 3 Programming Project
//Ingredient_Adjuster

#include <iostream>
using namespace std;

int main()
{
    double cookies;
    // Cookies are not going to cooked in anything other than whole numbers, 
    // but it's a double so it can be used for division with the other variables.

    cout << "How many cookies would you like to make? Please enter a whole number: ";
    cin >> cookies;

    double sugar;
    double butter;
    double flour;

    double eleven;
    eleven = 11;

    sugar = (cookies / 32);
    butter = (cookies / 48);
    flour = (cookies / (192 / eleven));

    cout << "You will need " << sugar << " cups of sugar for this recipe, " << endl;
    cout << butter << " cups of butter for this recipe, " << endl;
    cout << "and " << flour << " cups of flour for this recipe.";

    return 0;
}