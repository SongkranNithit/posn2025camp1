#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream readFile("score.txt", ios::in);
char name[30];
int score;
if (!readFile) {
cout << "Error opening file!" << endl;
return 1;
}
// อ่านข้อมูลจากไฟล์
while (readFile >> name >> score) {
cout << name << ' ' << score << endl;
}
readFile.close();
return 0;
}