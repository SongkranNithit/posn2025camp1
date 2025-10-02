#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,x,y,w;
    cin >> n >> t >> x >> y;
    vector <int> a;
    for (int i = 0; i < n; i++){
        cin >> w;
        a.push_back(w);
    }
    for (int j =0; j < t; j++){
        sort(a.begin(), a.end());
        int temp1,temp2;
        temp1 = a[x-1];
        temp2 = a[y-1];
        a.erase(a.begin() + (y - 1));
        a.erase(a.begin() + (x - 1));
        a.push_back(temp2-temp1);
        a.push_back((temp1+temp2)/2);
    }
    sort(a.begin(), a.end());
    for (int r = 0; r < a.size(); r++) {
    cout << a[r] << " ";
}
    return 0;
}