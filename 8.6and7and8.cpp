#include <iostream>
#include <fstream>
#include "Sales_data.h"
using namespace std;
int main(int argc, char *argv[]) {
    if (argc != 3) {
        cerr << "Please enter the input file name "
             << "and the output filename." << endl;
        return -1;
    }
    ifstream ifile(argv[1]);
    if (ifile) {
        cerr << "Unable to find the file." << endl;
        return -1;
    }
    ofstream ofile(argv[2], ofstream::app | ofstream::out);
    if (ofile) {
        cerr << "Unale to find the file." << endl;
        return -1;
    }

    Sales_data total;
    if (read(ifile, total)) {
        Sales_data trans;
        while (read(ifile, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(ofile, total);
                ofile << endl;
                total = trans;
            }
    }
    print(ofile, total);
    ofile << endl;
    } else {
        cerr << "No data." << endl;
    }
    return 0;
}