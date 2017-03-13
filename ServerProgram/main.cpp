#include <fstream>
#include <iostream>
#include <vector>
using namespace std;


vector<pair<string, string>> dataInput;


void readFile(){
    
    string filename;
    string userID;
    string publicKey;
//    cout << "Enter a filename: " ;
//    cin >> filename;
    ifstream infile("sample.txt");
    while (!infile.eof()) {
        getline(infile, userID, ' ');
        getline(infile, publicKey);
        dataInput.push_back(make_pair(userID, publicKey));
    }
}

/* Prints dataInput with their durations. Does not take any arguments. Does not return anything. */
void printdataInput() {
    for (int i = 0; i < dataInput.size(); i++) {
        cout << dataInput[i].first << ", " << dataInput[i].second << endl;
    }
}

int main() {
    // insert code here...
    readFile();
    printdataInput();
    return 0;
}

