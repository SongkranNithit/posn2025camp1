#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y,sum=0;
    cin >> n;
    vector <pair<int,int>> v;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),less<pair<int,int>>());
    int prem,pren;
    for(auto k : v){
        int m = k.first ,n = k.second;
        if (k == v[0]){
            prem = m;
            pren = n;
            continue;
        } else {
            if (m != prem){
                sum += pren;
            }
        }
        prem = m;
        pren = n;
    }
    cout << sum + v[n-1].second;
    return 0;
}