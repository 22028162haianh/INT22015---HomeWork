#include <iostream>

using namespace std;

struct String
{
    int n;  //size of string
    char* str;

    String(const char* s){
        int size = 0;
        while(s[size] != '\0'){
            size++;
        }
        n = size;

        str = new char[size + 1];
        for(int i = 0; i < size + 1; i++){
            str[i] = s[i];
        }
    }

    ~String(){
        delete[] str;
    }

    void print(){
        for(int i = 0; i < n; i++)
            cout << str[i];
        cout << endl;
    }

    void append(const char* s){
        int size = 0;
        while(s[size] != '\0'){
            size++;
        }
        char* tmp = new char[n + size + 1];
        for(int i = 0; i < n; i++){
            tmp[i] = str[i];
        }
        for(int i = n; i < n + size + 1; i++){
            tmp[i] = s[i - n];
        }
        delete[] str;
        str =tmp;
        n += size;
    }

};

int main()
{
    String s("Hi");
    s.print();  //s = "Hi"
    s.append(" there!");
    s.print();  //s = "Hi there!"
    return 0;
}