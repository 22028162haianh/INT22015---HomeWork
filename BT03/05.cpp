#include <iostream>

int main()
{
    int x, y; std::cin >> x >> y;
    int a[x][y];
    int num = 1, row = x, col = y, round = 0;
    //a[round][round] la phan tu goc trai cua moi vong
    //qua moi vong thi thu hep goc duoi phai va goc tren trai: col--, row--, round++
    while(num <= x * y){
        for(int j = round; j < col; j++){
            a[round][j] = num;
            num++;
        }
        if(row - 1 > round){
            for(int i = round + 1; i < row; i++){
                a[i][col - 1] = num;
                num++;
            }
            for(int j = col - 2; j >= round; j--){
                a[row - 1][j] = num;
                num++;
            }
            for(int i = row - 2; i > round; i--){
                a[i][round] = num;
                num++;
            }
        }
        round++;
        row--;
        col--;
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++)
            std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}
