#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(void) {
    string line, word;
    vecrot<PersonInfo> people;
    istringstream record;
    while (getline(cin, line)) {
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }    
    return 0;
}