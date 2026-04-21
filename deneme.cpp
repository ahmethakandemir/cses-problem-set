#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 0; i < a; i++){
        int am;
        cin >> am;
        int biggest = 0;
        int bigcount = 0;
        for (int j = 0; j < am; j++){
            int sik;
            cin >> sik;
            if (sik == biggest){
                bigcount++;
            }
            if (sik > biggest){
                bigcount = 1;
                biggest = sik;
            }
        }
        cout << bigcount << '\n';
    }
}