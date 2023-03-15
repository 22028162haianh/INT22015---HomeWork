#include <iostream>

using namespace std;

struct Point 
{
    float x, y;
};

void print(Point a)
{
    cout << "(" << a.x << ", " << a.y << ")" << endl;
}

int main()
{
    Point a;
    cin >> a.x >> a.y;
    print(a);
    return 0;
}