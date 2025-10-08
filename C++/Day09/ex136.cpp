#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,maxn=INT_MIN;
    double sum=0;
    cin >> n >> k;
    int all = n*k;
    vector<double> median;
    vector<double> over;
    int arr[n][k];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
            median.push_back(arr[i][j]);
            if (arr[i][j] > maxn){
                maxn = arr[i][j];
            }
        }   
    }
    sort(median.begin(),median.end());
    cout << "Average Power: " << fixed << setprecision(2) << sum/all << endl;
    if (all % 2 ==0){
        cout << "Median Power : " << fixed << setprecision(2) << (median[all/2] + median[(all/2)-1]) / 2 << endl;
    } else cout << "Median Power : " << fixed << setprecision(2) << median[all/2]<< endl;
    cout << "Values > avg :";
    for (auto m : median){
        if (m > sum/all) cout << " " << int(m) ;
    }
    cout << endl << endl << "Type Map:";
    for (int i = 0; i < n; i++){
        cout << endl;
        for (int j = 0; j < k; j++){
            if (i == -0 || i == n-1 || j == 0 || j == k-1) cout << "0";
            else if (arr[i][j] == maxn) cout << "h";
            else if (arr[i][j] > 0) cout << "p";
            else if (arr[i][j] == 0) cout << "z";
            else if (arr[i][j] < 0) cout << "n";
            cout << " ";
        }
    }
    return 0;
}