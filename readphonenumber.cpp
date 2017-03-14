#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(void) {
    ifstream ifile;
    ifile.open(argv[1]);
    string line, word;
    vector<PersonInfo> peole;
    //知道cin遇到文件末尾
    while (getline(ifile, line)) {
        PersonInfo info;
        istringstream record;
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
}