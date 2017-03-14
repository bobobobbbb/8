#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
    ifstream ifile(argv[1]);
    if (!ifile) {
        cerr << "Unable to find the file." << endl;
        return -1;
    }
   
    vector<string> lines;
    string line;
    while (getline(ifile, line)) {
        lines.push_back(line);
    }
    ifile.close();

    vector<string>::const_iterator it = lines.begin();
    while (it != lines.end()) {
        istringstream words(*it);
        string word;
        while (words >> word) {
            cout << word << endl;
        }
        cout << endl;
        ++it;
    }
    
    return 0;
}