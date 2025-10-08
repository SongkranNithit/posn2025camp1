#include <bits/stdc++.h>
using namespace std;

struct score {
    string name;
    int x;
    int y;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<score> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].name >> v[i].x >> v[i].y;
    }
    sort(v.begin(), v.end(), []( const score &a, const score &b){
        if(a.x != b.x) {return a.x < b.x;}
        else return a.y > b.y;
    });

    for(auto person : v) {
        cout << person.name << "\n";
    }

    return 0;
}
