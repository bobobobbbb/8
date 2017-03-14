#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string ifstream("README.txt");
    ifstream inputfile(ifile);
    ofstream outputfile;
    outputfile.open(ifile.txt);
    if (outputfile) //check fialbit
    inputfile.close();
    inputfile.open(ifile + ".copy");
    if (inputfile.good())
    for (auto p = argv + 1; p != argv + argc; p++) {
        ifstream input(*p);
        if (input) {
            process(input);
        } else 
            cerr << "Couldn't open: " + (*p) << endl;
    }
    
}
