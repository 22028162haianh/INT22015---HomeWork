#include <iostream>

using namespace std;

struct Point 
{
    float x, y;
};

void print(Point a)
{
    cout << &a << endl;
}

void p_print(Point& a)
{
    cout << &a << endl;
}

int main()
{
    Point a;
    cout << "Dia chi Point a: " << &a << endl;
    cout << "Dia chi tham bien Point a: ";
    print(a);
    cout << "Dia chi tham chieu Point a: ";
    p_print(a);
    return 0;
}