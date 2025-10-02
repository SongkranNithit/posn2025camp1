#include <iostream>
using namespace std;

int x = 11;

int main(){
    int x = 22;
    {

        int x = 33;
        cout << x << endl;
        cout << ::x << endl;
    }
    cout << x << endl;
    cout << ::x;

    return 0;
}