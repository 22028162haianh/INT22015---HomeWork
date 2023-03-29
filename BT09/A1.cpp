#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char* s1= "Hello world, ";
    const char* s2 = "SONE!!";
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    int size = size1 + size2;
    char* res = new char[size];
    strcpy(res, s1);
    strcat(res, s2);
    cout << res;
    return 0;
}