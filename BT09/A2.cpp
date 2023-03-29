#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100;
    cout << *p2;
    delete p2;  //the problem is here
    /*
        Explain: Same as A3, the value of the operand of delete
        shall be the pointer value which resulted from a previous array new-expression,
        If not, the behavior is undefined
        And p2 is not
    */

    return 0;
}