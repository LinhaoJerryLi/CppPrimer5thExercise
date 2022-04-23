#include <iostream>
using namespace std;

void printState(istream &, string);
istream& read_i_stream(istream &is){
        string str;
        while(is >> str){
            cout << str << endl;
        }
        printState(is, "Test EOF fail");
        is.clear(is.rdstate());
        printState(is, "Test clear a single bit");
        is.clear();
        return is;
    };

void printState(istream &is, string purpose){
    std::cout << purpose << "\n"
        << "is.badbit: " << is.badbit << "\n"
        << "is.failbit: " << is.failbit << "\n"
        << "is.eofbit: " << is.eofbit << "\n"
        << "is.goodbit: " << is.goodbit<< "\n"
        << "is.bad(): " << is.bad() << "\n" 
        << "is.fail(): " << is.fail() << "\n"
        << "is.eof(): " << is.eof() << "\n"
        << "is.good(): " << is.good() << "\n"
        << "is.rdstate(): " << is.rdstate() << endl;
}
int main(){
    istream& is = read_i_stream(cin);
    cout << is.rdstate() << endl;
    printState(is, "cleared:");
    return 0;
}