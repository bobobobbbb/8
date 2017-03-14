#include <iostream>
#include <vector>
using namespace std;
istream &f(istream &in) {
    int v;
    while (in >> v, !in.eof()) {
        if (in.bad()) {
            throw runtime_error("IO strm error.");
        } 
        if (in.fail()) {
            cerr << "error input please try it again." << endl;
            in.clear();
            in.ignore(100, '/n');
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}

int main() {
    cout << "enter some number ,press Ctrl+Z to end up." << endl;
    f(cin);
    return 0;
}