#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1e9+7;

int custompow (int a,int b){
    int result = 1;
    for (int i = 0; i < b; i++){
        result *= a;
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int q;
    cin >> q;

    for (int i = 0; i < q; i++){
        int k, basamak = 1,total = 0, lasttotal = 0;
        cin >> k;
        while(total < k){
            lasttotal = total;
            total += (basamak * (custompow(10,basamak) - custompow(10,basamak - 1)));
            basamak++; 
        }
        basamak--;
        // cout << "basamak: " << basamak << '\n';
        int innerk = (((k - lasttotal) - 1) / basamak);
        // cout << "innerk: " << innerk << '\n' ;
        int sayi = innerk + (int)custompow(10, basamak - 1);
        // cout << "sayi: " << sayi << endl;
        // cout << "lasttotal: " << lasttotal << endl;
        int kacincibasamak = (k - lasttotal - 1) % basamak;
        // cout << "kacincibasamak: " << basamak - kacincibasamak << endl;
        int bolen = 1;
        for (int i = 0; i < basamak - kacincibasamak - 1; i++) bolen *= 10;
        int result = (sayi / bolen) % 10;
        cout << result % MOD << endl;

    }


}



