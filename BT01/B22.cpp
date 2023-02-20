/*BMI*/
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double w, h;
    cin >> w >> h;
    double bmi = w / (h * h);
    cout << bmi;

    return 0;
}
