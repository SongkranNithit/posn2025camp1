#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string phone;
    getline(cin,phone);
    if (phone[0] != '0' || phone.length() != 10){
        cout << "Invalid phone number";
        return 0;
    }
    cout << phone.substr(0,3) << "-" << phone.substr(3,3) << "-" << phone.substr(6,4);
    return 0;
}