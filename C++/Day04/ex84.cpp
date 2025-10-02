#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int sum = 0,product=1,d=0;
    string s;
    map<int,int> unique;
    vector<int> order;
    getline(cin,s);
    for (int i = 0; i < s.length(); ++i){
        if (isdigit(s[i])){
            sum += s[i] - '0';
            product *= s[i] - '0';
            if (unique[s[i] - '0'] == 0) order.push_back(s[i] - '0');
            unique[s[i] - '0']++;
            d++;
        }
    }
    if (d == 0){
        cout << "No digits found in the input.";
        return 0;
    }
    cout << sum;
    // cout << "Sum of digits: " << sum << endl;
    // cout << "Product of digits: " << product << endl;
    // cout << "Number of unique digits: " << unique.size() << endl;
    // cout << "Frequency of each digit:" << endl;
    // for (auto m : order){
    //     cout << "Digit " << m << ": " << unique[m] << " times" << endl;
    
    return 0;
}