#include <bits/stdc++.h>
#define int long long
using namespace std;


int board[8][8], ans = 0; 

void fun(int row, int col){
    if (row == 8 && col == 0){
        // cout << ans << "\n";
        // for (int i=0;i<8;++i) {
        //     for (int j=0;j<8;++j) {
        //         cout << board[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\n";
        ans++;
        return;
    }

    if(board[row][col] == 1){
        return;
    }
    
    for (int i = row - 1,j = col - 1; i >= 0 && j >= 0; i--,j--){
        if (board[i][j] == 2) return;
    }
    for (int i = row - 1; i >= 0; i--){
        if (board[i][col] == 2) return;
    }
    for (int i = row - 1,j = col + 1; i >= 0 && j < 8; i--,j++){
        if (board[i][j] == 2) return;
    }
    
    board[row][col] = 2;
    for(int j = 0; j < 8; j++)
        fun(row + 1, j);
    board[row][col] = 0;

}


signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    for (int i = 0; i < 8;i++){
        for (int j = 0; j < 8;j++){
            char c;
            cin >> c;
            if (c == '*') board[i][j] = 1; 
        }
    }
    for (int i = 0 ; i < 8;i++)
        fun(0,i);
    cout << ans << '\n';

}

