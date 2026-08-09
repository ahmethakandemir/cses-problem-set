#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<int> arr(100);
    string line;
    getline(cin, line);
    int linelen = line.length();
    vector<char> result;
    for (int i = 65; i <= 90; i++){
        arr[i] = 0;
    }
    
    for (int i = 0; i < linelen; i++){
        arr[(int)line[i]]++;
    }
    
    int maxind = 0;
    arr[0] = -1;
    for (int k = 65; k <= 90; k++){
        if (arr[k] > arr[maxind]) maxind = k;
    }
    if(arr[maxind]*2 - 1 > linelen) {
        cout << -1 << endl;
        return 0;
    }
    else if(arr[maxind]*2 - 1 == linelen) {
        result.push_back((char)maxind);
        arr[maxind]--;
    }
    else{
        for (int k = 65; k <= 90; k++){
            if(arr[k] != 0){
                result.push_back((char)k);
                arr[k]--;
                break;
            }
        }
    }
    
    for (int i = 1; i < linelen; i++){
        maxind = 0;
        for (int k = 65; k <= 90; k++){
            if (arr[k] > arr[maxind]) maxind = k;
        }
        if ((arr[maxind] * 2) - 1 == linelen - i){
            result.push_back((char)maxind);
            // cout << "result pushed" << endl;
            arr[maxind]--;
            // cout << "result pushed" << endl;
            continue;
        }
        for (int k = 65; k <= 90; k++){
            if (arr[k] == 0) continue;
            
            if(result[i - 1] != (char)k){
                result.push_back((char)k);
                // cout << "result pushed" << endl;
                arr[k]--;
                break;
            }
        }
    }

    for (int i = 0; i < result.size(); i++){
        cout << result[i];
    }
    
    cout <<endl;


}