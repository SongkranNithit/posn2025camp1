#include <bits/stdc++.h>
using namespace std;

bool leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    string s;
    cin >> s;
    string y = s.substr(0, 4);
    string m  = s.substr(5,2);
    string d  = s.substr(8,2);
    if (s.length() != 10 || s[4] != '-' || s[7] != '-') {
        cout << "Invalid date.";
        return 0;
    }
    int year = stoi(y);
    int month = stoi(m);
    int day = stoi(d);
    
    if (month < 1 || month > 12) {
        cout << "Invalid month.";
        return 0;
    }

    int maxd;
    if (month == 2) {
        if (leap(year)) {
            maxd = 29;
        } else {
            maxd = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxd = 30;
    } else {
        maxd = 31;
    }

    if (day < 1 || day > maxd) {
        cout << "Invalid Day.";
        return 0;
    }
    cout << d << "/" << m << "/" << y;
    return 0;
}