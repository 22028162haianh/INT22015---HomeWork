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

Point mid_point(const Point a, const Point b)
{
    Point ans;
    ans.x = (a.x + b.x) / 2;
    ans.y = (a.y + b.y) / 2;
    return ans;
}

int main()
{
    Point a, b;
    cin >> a.x >> a.y;
    cin >> b.x >> b.x;
    print(mid_point(a, b));
    return 0;
}