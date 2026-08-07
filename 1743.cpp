#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<int> arr(100);
    string line;
    getline(cin, line);
    vector<char> result;
    for (int i = 65; i <= 90; i++){
        arr[i] = 0;
    }
    
    for (int i = 0; i < line.length(); i++){
        arr[(int)line[i]]++;
    }
    
    // for (int i = 65; i <= 90; i++){
    //     cout << arr[i] << endl;
    // }

    for (int i = 0; i < line.length(); i += 2){
        int max1 = 65, max2 = 65;
        for (int j = 66; j <= 90; j++){
            if (arr[j] > arr[max1]){
                max2 = max1;
                max1 = j;
            }
            else if (arr[j] > arr[max2]){
                max2 = j;
            }
        }
        result.push_back((char)max1);
        result.push_back((char)max2);
    }
    
    for (int i = 0; i < result.size(); i++){
        cout << result[i];
    }
    cout <<endl;


}