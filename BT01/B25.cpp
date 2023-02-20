#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int a[5];
    double av = 0;  //mean of a[0] -> a[5]
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        av += a[i];
    }
    av /= 5;
    double minn = abs(a[0] - av);   //minimum distance from av to a number in array
    int idx = 0;    //index of average number in array a
    for(int i = 1; i < 5; i++){
        if(abs(a[i] - av) < minn){
            minn = abs(a[i] - av);
            idx = i;
        }
    }
    cout << a[idx];
    return 0;
}
