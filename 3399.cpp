#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,a,b;
        cin >> n;
        cin >> a;
        cin >> b;

        if (n < a + b) {
            cout << "NO";
        }
        else if ((a == 0 && b != 0) || (b == 0 && a != 0)){
            cout << "NO";
        }
        else {
            cout << "YES" << endl;
            int ct = min(a,b) - 1;
            int lastindex = (ct * 2) + 1;
            
            if (a < b){

                int o = 2;
                while (o < lastindex){
                    cout << o << ' ';
                    cout << o - 1 << ' ';
                    o += 2;
                }
                for (int ind = lastindex; ind <= n; ind++){
                    cout << ind << ' ';
                }
                cout << '\n';
                for (int oss = 1; oss < lastindex; oss++){
                    cout << oss << ' ';
                }
                int oss;
                for (oss = 1; oss <= abs(a-b) + 1; oss++){
                    cout << lastindex + oss << ' ';
                }
                cout << lastindex << ' ';
                for (int k = lastindex + oss; k <= n; k++){
                    cout << k << ' ';
                }
            }            
            if (a > b){
                for (int oss = 1; oss < lastindex; oss++){
                    cout << oss << ' ';
                }
                int oss;
                for (oss = 1; oss <= abs(a-b) + 1; oss++){
                    cout << lastindex + oss << ' ';
                }
                cout << lastindex << ' ';
                for (int k = lastindex + oss; k <= n; k++){
                    cout << k << ' ';
                }
                cout << '\n';

                int o = 2;
                while (o < lastindex){
                    cout << o << ' ';
                    cout << o - 1 << ' ';
                    o += 2;
                }
                for (int ind = lastindex; ind <= n; ind++){
                    cout << ind << ' ';
                }
                
            }
            if (a == b){
                for (int oss = 1; oss <= n; oss++){
                    cout << oss << ' ';
                }
                cout << endl;
                
                lastindex = (a * 2) + 1;
                int o = 2;
                while (o < lastindex){
                    cout << o << ' ';
                    cout << o - 1 << ' ';
                    o += 2;
                }
                for (int ind = lastindex; ind <= n; ind++){
                    cout << ind << ' ';
                }
            }   
            
        }
        
        cout << '\n';
    }
}
    // for (int i = 0; i < n; i++){
        //     cout << n << ' ' << a << ' ' << b << endl;
        // }
