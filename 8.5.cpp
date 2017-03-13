#include <iosteam>
#include <string>
#include <vector>
using namespace std;
int main(void) {
    string ifile("README.txt");
    ifstream infile;
    infile.open(ifile);
    if (!infile) {
        cerr << "Unable to find that file." << endl;
        return -1;
    }
    while (infile) {
        in >> line;
    }
}