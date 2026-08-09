#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> board(7,vector<int>(7));
string path;
int counter = 0;


bool isvalid(int x, int y){
    if (y < 0 || y > 6 || x < 0 || x > 6){
        return false;
    }
    return !board[x][y];
}

void dfs(int x, int y, int index){
    if(!isvalid(x,y)) return;
    if (x == 6 && y == 0){
        if(index == 48) counter++;
        return;
    }

    if(isvalid (x,y+1) && isvalid(x, y - 1) && !isvalid(x + 1,y) && !isvalid(x-1,y)) return;
    if(!isvalid (x,y+1) && !isvalid(x, y - 1) && isvalid(x + 1,y) && isvalid(x-1,y)) return;
    


    board[x][y] = 1;
    
    if(path[index] == '?' || path[index] == 'R'){
        dfs(x, y + 1, index + 1);
    }
    if(path[index] == '?' || path[index] == 'L'){
        dfs(x, y - 1, index + 1);
    }
    if(path[index] == '?' || path[index] == 'U'){
        dfs(x - 1, y, index + 1);
    }
    if(path[index] == '?' || path[index] == 'D'){
        dfs(x + 1, y, index + 1);
    }
    board[x][y] = 0;
}


signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> path;

    dfs(0,0,0);
    cout << counter << endl;

}