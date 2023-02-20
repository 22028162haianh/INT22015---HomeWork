#include <iostream>

using namespace std;


int main()
{
    bool isRunning = true;
    while(isRunning){
        int n; cin >> n;
        if(n >= 0 && n % 5 == 0)
            cout << n / 5 << endl;
        else{
            cout << "-1" << endl;
            isRunning = false;
        }
    }
    cout << "Bye";
    return 0;
}
