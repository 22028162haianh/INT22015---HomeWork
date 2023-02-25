#include <iostream>

int main()
{
    int m, n; std::cin >> m >> n;
    char a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) std::cin >> a[i][j];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '*') std::cout << '*' << ' ';
            else{
                int c = 0;
                if(a[i-1][j-1] == '*') c++;
                if(a[i-1][j] == '*') c++;
                if(a[i-1][j+1] == '*') c++;
                if(a[i][j-1] == '*') c++;
                if(a[i][j+1] == '*') c++;
                if(a[i+1][j-1] == '*') c++;
                if(a[i+1][j] == '*') c++;
                if(a[i+1][j+1] == '*') c++;
                std::cout << c << ' ';
            }
        }
        std::cout << '\n';
    }
    return 0;
}
