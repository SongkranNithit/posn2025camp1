#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ofstream myFile("score.txt", ios::out);
    if (!myFile) {
    cout << "Error opening file!" << endl;
    return 1;
    }
    
myFile << "This is a test score." << endl;
myFile.close(); // ปิดไฟล ์
return 0;
}