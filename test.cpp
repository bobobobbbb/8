cin.tie(&cout);
ostream *old_tie = cin.tie(nullptr);
cin.tie(&cerr);
cin.tie(old_tie)
cin.tie(nullptr);
fstream fstrm;
fstream fstrm(s);
fstream fsrm(s, mode);
fstrm.open(s);
ifstram input(argv[1]); 
ofstream output(argv[2]);
Sales_data total;
if (read(input, total)) {
    Sales_data trans;
    while (read(input, trans)) {
        if (total.isbn() == trans.isbn())
            total.combine(trans);
        else {
            print(output, total) << endl;
        } else
        cerr << "No data?!" << endl;
    }
}
istream &read(istream &, Sales_data &) {

}
ostream &print(ostream &, const Sales_data &) {

}
ifstream in(ifile);
ofstream out;
out.open(ifile + ".copy");
for (auto p = argv + 1; p != argv + argc; ++p) {
    ifstream input(*p);
    if (input) {
        process(input);
    } else 
        cerr << "couldn't open: " + string(*p);
}
ofstream::in ofstream::out ofstream::app ate binary
ofstream out("file1");
ofstream out2("file2", ofstream::out);
ofstream out3("file3", ofstream::out | ofstream::trunc);
ofstream app("file2", ofstream::app);
ofstream app("file2", ofstream::app | ofstream::app);
ofstream out;
out.open("scratchpad");
out.close();
out.ioen("precious", ofstream::app);
out.close();
istringstream
sstream
sstream strm;
ostringstream strm;
istringstream strm;
strm.str();
sstrm.str(s);
morgan 20155552385 862
struct PersonInfo {
    string name;
    vector<string> phone;
};
ostringstream 
for (const auto &entry : people) {
    ostringstream formatted, badNums;
    for (cost auto & nums : entry.phones) {
        if (!valid(nums)) {
            badNums << " " << nums;
        } else
            for matted << " " << format(nums);
    }
    if (badNums.str().empty()) 
        os << entry.name << " "
           << formatted.str() << endl;
    else 
        cerr << "input error: " << entry.name 
             << " invalid number(s) " << badNums.str() << endl;
}