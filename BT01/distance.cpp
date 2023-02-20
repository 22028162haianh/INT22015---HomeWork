#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    double dt = sqrt(x * x + y * y);
    cout << dt;
    return 0;
}
