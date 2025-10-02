#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin >> n >> k;
    map<int,int> freq;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        freq[x]++;
    }
     for (auto a : freq){
        if (a.second >= k){
            cout << a.first << ": ";
            for (int j = 0; j < a.second; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}