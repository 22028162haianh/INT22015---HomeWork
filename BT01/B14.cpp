#include <iostream>
#include <ctime>

using namespace std;


int main()
{
    srand(time(0));
    int num1 = rand() % 101;
    int num2 = rand() % 101;
    cout << "Pick a card (1 or 2) to see the number: " << endl << "CARD ";
    int pick; cin >> pick;
    if(pick == 1){
        cout << num1 << endl;
        cout << "Your choice for the bigger one: " << endl;
        if(num1 < 50){
            cout << "CARD 2" << endl;
            if(num2 > num1) cout << "CORRECT";
            else cout << "WRONG";
        }
        else{
            cout << "CARD 1" << endl;
            if(num1 > num2) cout << "CORRECT";
            else cout << "WRONG";
        }
    }
    else{
        cout << num2 << endl;
        cout << "Your choice for the bigger one: " << endl;
        if(num2 < 50){
            cout << "CARD 1" << endl;
            if(num1 > num2) cout << "CORRECT";
            else cout << "WRONG";
        }
        else{
            cout << "CARD 2" << endl;
            if(num2 > num1) cout << "CORRECT";
            else cout << "WRONG";
        }
    }
    return 0;
}
