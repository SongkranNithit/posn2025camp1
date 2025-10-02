#include <iostream>
#include <vector>
#include <algorithm>
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
    for (int i =0; i < t; i++){
        sort(a.begin(), a.end());
        w = a[x-1];
        n = a[y-1];
        a.erase(a.begin() + (y - 1));
        a.erase(a.begin() + (x - 1));
        a.push_back(n-w);
        a.push_back((w+n)/2);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
}
    return 0;
}