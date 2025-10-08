#include <bits/stdc++.h>
using namespace std;


void swap(int *a,int *b);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int x = 5, y = 10;
    cout << "Before swap x : " << x << " y: " << y << endl;
    swap(&x,&y);
    cout << "After swap x : " << x << " y: " << y << endl;





    return 0;
}
//pass by reference
void swap(int *px,int*py){
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}