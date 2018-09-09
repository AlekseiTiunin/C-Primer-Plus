#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double add(double, double);
double substract(double, double);
double multiply(double, double);
double divide(double, double);
double calculate(double, double, double (*fun) (double, double));
void input (double *, double *);
void menu();

int main()
{

    double (*pf[4]) (double, double) = {add, substract, multiply, divide};
    double number1, number2;
    char choice;
    cout << "Enter two numbers: " << endl;
    input(&number1, &number2);
    menu();
    while (cin.get(choice) && choice != 'q')
    {
        while (cin.get() != '\n')
            continue;
        switch (choice)
        {
            case 'a' : cout << number1 << " + " << number2
                            << " = " << calculate(number1, number2, pf[0]) << endl;
                menu();
                break;
            case 's' : cout << number1 << " - " << number2
                        << " = " << calculate(number1, number2, pf[1]) << endl;
                menu();
                break;
            case 'm' : cout << number1 << " * " << number2
                    << " = " << calculate(number1, number2, pf[2]) << endl;
                menu();
                break;
            case 'd' : cout << number1 << " / " << number2
                        << " = " << calculate(number1, number2, pf[3]) << endl;
                menu();
                break;
            case 'i' : cout << "Enter two numbers: " << endl;
                input(&number1, &number2);
                menu();
                break;
            default : cout << "Wrong input, repeat: ";
        }
    }
}

void input (double *num1, double *num2)
{
    while (!(cin >> *num1 >> *num2))
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Wrong input, repeat: ";
    }
    while (cin.get() != '\n')
        continue;
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double substract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 == 0)
    {
        cout << "Division by 0, abort" << endl;
        return 0;
    }
    else
        return num1 / num2;
}

double calculate(double num1, double num2, double (*fun) (double, double))
{
    return (*fun)(num1, num2);
}

void menu()
{
    cout << "a) add         s) substract\n"
            "m) multiply    d) divide\n"
            "i) input       q) quit\n";
}
