#include <iostream>
#include <fstream>

using namespace std;

string convertToBinary(int number) {
    string binary = "";
    while (number > 0) {
        binary = to_string(number % 2) + binary;
        number /= 2;
    }
    return binary;
}

void writing(string outputLine) {
    ofstream outputFile("output.txt");
    outputLine = outputLine.substr(0, 255);

    for(int i=0; i < outputLine.length(); i++)
        if(outputLine[i] >= '0' && outputLine[i] <= '9')
            outputFile << convertToBinary(outputLine[i] - '0');
        else
            outputFile << outputLine[i];
    outputFile.close();
}

int main() {
    ifstream inputFile("input.txt");
    string line;
    string outputLine;

    while(getline(inputFile, line))
        outputLine += line + '\n';

    writing(outputLine);

}