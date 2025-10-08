#include <bits/stdc++.h>
using namespace std;

void hanoi(int n,char from_node,char to_node,char temp_node){
    if(n <= 0)return;
    hanoi(n-1,from_node,temp_node,to_node);
    cout << "Move crystal ball " << n << " from tower " << from_node << " to tower " << to_node << endl; 
    hanoi(n-1,temp_node,to_node,from_node);
    return;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    hanoi(n,'A','C','B');


    return 0;
}