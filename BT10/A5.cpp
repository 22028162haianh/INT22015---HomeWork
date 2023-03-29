#include <iostream>

using namespace std;

struct List
{
    int array[10];
};

int main()
{
    List t;
    cout << &t << endl;

    for(int i = 0; i < 10; i++)
        cout << &t.array[i] << ' ';

    return 0;
}
//moi phan tu cua mang lan luot co dia chi la o nho tiep theo