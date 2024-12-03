#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    string thisLine;
    ifstream text("DayOneInput.txt");
    vector<int> list1;
    vector<int> list2;
    map<int, int> numCount;
    while (getline (text, thisLine)) {
        int charNum = 0;
        string first = "";
        string second = "";
        while (thisLine[charNum] != ' ') {
            first += thisLine[charNum];
            charNum += 1;
        }
        list1.push_back(stoi(first));
        numCount[stoi(first)] = 0;
        charNum += 3;
        while (charNum < thisLine.size()) {
            second += thisLine[charNum];
            charNum += 1;
        }
        list2.push_back(stoi(second));
    }
    for (int i : list2) {
        if (numCount.find(i) != numCount.end()) {
            numCount[i] += 1;
        }
    }
    int totalSimilarity = 0;
    for (auto it : numCount) {
        totalSimilarity += it.first * it.second;
    }
    cout << totalSimilarity;
}