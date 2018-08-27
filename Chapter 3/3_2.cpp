// bmi_calculator.cpp

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int kFootToInch = 12;
    const double kInchToM = 0.0254;
    const double kPoundToKg = 1.0 / 2.2;
    int height_foot, height_inch, weight_pound;
    double height_m, weight_kg;

    cout << "Type height in foots and inches (separate by space):" << endl;
    cin >> height_foot >> height_inch;
    cout << "Type weight in pounds:" << endl;
    cin >> weight_pound;
    height_m = (height_foot * kFootToInch + height_inch) * kInchToM;
    weight_kg = weight_pound * kPoundToKg;
    cout << "Your height is " << height_m << " cm" << endl
         << "Your weight is " << weight_kg << endl
         << "Your BMI is " << weight_kg / (height_m * height_m) << endl;

    return 0;
}
