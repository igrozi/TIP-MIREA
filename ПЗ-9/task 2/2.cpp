#include <iostream>
#include <fstream>

using namespace std;

string checkSubstring(string str1, string str2) {
    if (str1.find(str2) != string::npos)
        return "Yes !";
    else
        return "No !";
}

int main() {
    ifstream x("input1.txt");
    ifstream y("input2.txt");

    string lineToX;
    string lineToY;
    string line;

    while(getline(x, line))
        lineToX += line + '\n';

    line = "";

    while(getline(y, line))
        lineToY += line + '\n';

    cout << checkSubstring(lineToX, lineToY);
}