#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>


using namespace std;

istream & f(istream & in)
{
    string v;
    while (in >> v, !in.eof()) { //如果为stringstream的话没吃遇到空格就为一个间断，读到stream的末尾返回EOF
        if (in.bad())
            throw runtime_error("IOStream error");
        if (in.fail()) {
            cerr << "data error retry." << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}

int main(void) {
    ostringstream msg;
    msg << "I gave u a message." << endl;
    istringstream in(msg.str());
    f(in);
    return 0;
}