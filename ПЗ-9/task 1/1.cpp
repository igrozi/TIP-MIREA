#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string reading() {
    ifstream inputFile("input.txt");
    string line;
    string outputLine;

    while(getline(inputFile, line))
        outputLine += line + '\n';

    inputFile.close();
    return outputLine;
}

void writing(string outputLine) {
    ofstream outputFile("output.txt");
    for(int i=0; i<outputLine.length(); i++)
        if(outputLine[i] != 'u' &&
            outputLine[i] != 's' &&
            outputLine[i] != 'e' &&
            outputLine[i] != 'r' &&
            outputLine[i] != 'a' &&
            outputLine[i] != 'g' &&
            outputLine[i] != 'e' &&
            outputLine[i] != 'm' &&
            outputLine[i] != 'n' &&
            outputLine[i] != 't')
            outputFile << outputLine[i];

    outputFile.close();
}

int main() {
    string inputLine = reading();
    writing(inputLine);
}