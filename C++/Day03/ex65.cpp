#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    double med;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    cout << "sort: ";
    for (auto m : arr){
        cout << m << " ";
    }
    if (n % 2 ==0){
        med = (arr[(n/2)-1] + arr[n/2]) / 2.0;
    } else med = arr[(n)/2];
    cout << "\n" << "median: " << fixed << setprecision(1) << med;

    return 0;
}