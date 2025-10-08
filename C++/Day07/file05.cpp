#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
ofstream myFile("score.txt", ios::out);
char name[30];
int score;
cout << "Enter name and score (type 'exit' as name to stop): " << endl;
while (true)
{
cin >> name;
if (strcmp(name, "exit") == 0) 
break;
cin >> score; 
myFile << name << '\t' << score << '\n';

}
myFile.close();
cout << "Data saved successfully." << endl;
return 0;
}
