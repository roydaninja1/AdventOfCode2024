#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void selectionSort(vector<int> &list) {
    int size = list.size();
    for (int i = 0; i < size - 1; i++) {
        int smallestIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (list[j] < list[smallestIndex]) {
                smallestIndex = j;
            }
        }
        if (i != smallestIndex) {
            int placeholder = list[i];
            list[i] = list[smallestIndex];
            list[smallestIndex] = placeholder;
        }
    }
}

int main() {
    string thisLine;
    ifstream text("DayOneInput.txt");
    vector<int> list1;
    vector<int> list2;
    while (getline (text, thisLine)) {
        int charNum = 0;
        string first = "";
        string second = "";
        while (thisLine[charNum] != ' ') {
            first += thisLine[charNum];
            charNum += 1;
        }
        list1.push_back(stoi(first));
        charNum += 3;
        while (charNum < thisLine.size()) {
            second += thisLine[charNum];
            charNum += 1;
        }
        list2.push_back(stoi(second));
    }
    selectionSort(list1);
    selectionSort(list2);
    int size = list1.size();
    int totalDistance = 0;
    for (int i = 0; i < size; i++) {
        totalDistance += abs(list1[i] - list2[i]);
    }
    cout << totalDistance;
}