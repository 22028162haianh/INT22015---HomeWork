/*Ordered*/
#include <iostream>

using namespace std;


int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool b =  true;
    if((x - y) * (y - z) >= 0) b = true;
    else b = false;

    if(b) cout << "true";
    else cout << "false";

    return 0;
}
