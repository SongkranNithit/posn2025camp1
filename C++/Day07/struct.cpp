#include <bits/stdc++.h>
using namespace std;

struct info{
    string name;
    int age;
    string school;
    string province;
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    info student;
    cin >> student.name >> student.age >> student.school >> student.province;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl; 
    cout << "School: " << student.school << endl; 
    cout << "Province: " << student.province << endl; 
    return 0;
}