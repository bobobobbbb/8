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