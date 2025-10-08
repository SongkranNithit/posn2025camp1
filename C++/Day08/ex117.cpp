#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,fhalf,shalf;
    getline(cin,s);
    int l = s.length();

    if (l % 2 == 0){
        fhalf = s.substr(0,l/2);
        shalf = s.substr(l/2,l-l/2);
        reverse(fhalf.begin(),fhalf.end());
        reverse(shalf.begin(),shalf.end());
        cout << fhalf << shalf;

    } else {

        fhalf = s.substr(0,l/2);
        shalf = s.substr(l/2+1,l-l/2);
        reverse(fhalf.begin(),fhalf.end());
        reverse(shalf.begin(),shalf.end());
        cout << fhalf << s[(l+1)/2] << shalf;


    }
    return 0;
}