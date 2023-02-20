#include <iostream>

using namespace std;


int main()
{
    int n; cin >> n;
    double a[n];
    double minn = INT_MAX, maxx = -INT_MAX, aver = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        aver += a[i];
        if(a[i] > maxx) maxx = a[i];
        if(a[i] < minn) minn = a[i];
    }
    cout << "Mean: " << aver / n << '\n' << "Max: " << maxx << '\n' << "Min: " << minn;

    return 0;
}
