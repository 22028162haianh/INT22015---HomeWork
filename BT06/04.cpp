#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class hadama
{
private:
    int size;
    vector<vector<char>> hada;
public:
    void generate_hada(int x){
        hadama tmp(x / 2);
        vector<vector<char>> v1 = tmp.get_hada();
        vector<vector<char>> v2 = tmp.get_convert_hada();
        int n = tmp.get_size();
        for(int i = 0; i < n; i++){
            vector<char> v;
            for(int j = 0; j < n; j++){
                char c = v1[i][j];
                v.push_back(c);
            }
            for(int j = 0; j < n; j++){
                char c = v1[i][j];
                v.push_back(c);
            }
            hada.push_back(v);
        }
        for(int i = 0; i < n; i++){
            vector<char> v;
            for(int j = 0; j < n; j++){
                char c = v1[i][j];
                v.push_back(c);
            }
            for(int j = 0; j < n; j++){
                char c = v2[i][j];
                v.push_back(c);
            }
            hada.push_back(v);
        }
    }
    hadama(int x){
        size = x;
        if(size == 1){
            vector<char> v;
            v.push_back('.');
            hada.push_back(v);
        }
        else{
            generate_hada(size);
        }
    }

    vector<vector<char>> get_hada() {return hada;}

    vector<vector<char>> get_convert_hada(){
        vector<vector<char>> ans = hada;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(hada[i][j] == '.') ans[i][j] = 'o';
                else ans[i][j] = '.';
            }
        }
        return ans;
    }

    int get_size() {return size;}

    void print()
    {
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                cout << hada[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

int main ()
{
    int n; cin >> n;
    int pn = pow(2, n);
    hadama x(pn);
    x.print();
    return 0;
}
