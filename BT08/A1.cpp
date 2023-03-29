/* Giai thich
Vi khi goi ham f, dia chi cua x chinh la vi tri o nho
bat dau tren dinh stack cua ham main. Khi ket thuc ham
f, o nho do giai phong va 1 lan nua cap lai cho ham g,
va dia chi cua y chinh la o nho do
*/


#include <iostream>

using namespace std;

void f(int xval)
{
    int x;
    x = xval;
    cout << &x;
}

void g(int yval)
{
    int y;
    cout << &y;
}

int main()
{
    f(7);
    g(11);

    return 0;
}