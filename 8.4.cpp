#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
int main(void) {
    string ifile("README.txt");
    ifstream infile(ifile);
    if (!infile) {
        cerr << "unable to open the input file." << endl;
        return -1;
    }
    string line;
    vector<string> stringContainer;
    while (infile) {
        /*getline(infile, line);*/
        infile >> line;
        stringContainer.push_back(line);
    }   
    infile.close();

    vector<string>::const_iterator it = stringContainer.begin();
    while (it != stringContainer.end()) {
        cout << *it << endl;
        ++it;
    }
    return 0;
}