#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    double maxarea=INT_MIN,maxpara=INT_MIN;
    cin >>n;
    double arr[n];
    for (int i =0; i <n; i++){
        cin >> arr[i];
    }
    for (int i =0; i <n; i++){
        cout << "Area of circle " << i+1 << ": " << fixed << setprecision(3) << arr[i] * arr[i] * M_PI << endl;
        cout << "Perimeter of circle " << i+1 << ": " << fixed << setprecision(3) << 2 * arr[i] * M_PI << endl;
        if (arr[i] * arr[i] * M_PI > maxarea){
            maxarea = arr[i] * arr[i] * M_PI;
        }
        if (2 * arr[i] * M_PI > maxpara){
            maxpara = 2 * arr[i] * M_PI;
        }
    }
    cout << "The maximum area is: " << fixed << setprecision(3)  << maxarea << endl;
    cout << "The maximum perimeter is: " << fixed << setprecision(3)  << maxpara;
    return 0;
}