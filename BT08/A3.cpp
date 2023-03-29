/*Giai thich
tham so truyen vao ham swap_pointers co kieu du lieu la con tro,
nen muon thay doi gia tri cua con tro phai truyen con tro cua con tro,
hoac la truyen tham chieu
*/

#include <iostream>

using namespace std;
/*
void swap_pointers(char* &x, char* &y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1, s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
*/
void swap_pointers(char** x, char** y)
{
   char *tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(&s1, &s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
