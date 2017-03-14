#include <iostream>
#include <stdexcept>
using namespace std;
istream &  f(istream &in) {
    int v;
    while (in >> v, !in.eof()) {
        if (in.bad())
            throw runtime_error("IO strm error");
        if (in.fail()) {
            cerr << "data error, please retry: " << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}
int main() {
    cout << "please enter some integal number, and press Ctrl+Z to end up" << endl; 
    // Ctrl+Z equal to EOF
    f(cin);
    return 0;
}