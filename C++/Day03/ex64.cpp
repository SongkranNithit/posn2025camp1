#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    double avg=0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
        avg += arr[i];
    }
    sort(arr.begin(),arr.end());
    cout << "sorting: ";
    for (auto m : arr){
        cout << m << " ";
    }
    cout << "\n" << "avg: " << fixed << setprecision(2) << avg/n;

    return 0;
}