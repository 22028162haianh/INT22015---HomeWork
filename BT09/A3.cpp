#include <iostream>

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;   //A BUG!!
    cerr << "a after deleting c:" << "-" << a << "-" << endl;   //this cerr has a problem
    /* 
    Explain: the value of the operand of delete shall be 
    the pointer value which resulted from a previous array new-expression
    If not, the behavior is undefined
    And... c is not
    */

    return 0;
}