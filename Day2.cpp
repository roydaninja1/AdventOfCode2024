#include <vector>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    vector<vector<int>> levels;
    ifstream text("Day2Input.txt");
    string level;
    vector<string> delimtest;
    int i = 20;
    while (getline(text, level, ' ') &&  i >= 0) {
        cout << level
    }
    for (int i = 0; i < delimtest.size(); i++) {
        cout << delimtest[i] << " ";
    }

}