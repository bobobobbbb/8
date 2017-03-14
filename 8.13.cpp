#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};
string format(const string &s) { return s; }

bool valid(const string &s) {
    //
    //
    return true;
}
int main(int argc, char *argv[]) {
    string line, word;
    ifstream ifile;
    ifile.open(argv[1]);
    if (!in) {
        cerr << "Unable to open this file." << endl;
        return -1;
    }
    vector<PersonInfo> people;
    ostringstream os;
    for (const auto &entry : people) {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.phones) {
            if (!valid(nums)) {
                badNums << nums << " ";
            } else 
                formatted << nums << " ";
        }
        if (badNums.str().empty()) {
            os << entry.name << formatted.str() << endl;
        } else  
            os << "input error: " << entry.name << badNums << endl;
            
    }
    cout << os.str() << endl;

    return 0; 
}
