#include <iostream>
using namespace std;

istream& read_i_stream(istream &is){
        string str;
        while(is >> str){
            cout << str << endl;
        }
        is.clear();
        return is;
    };

int main(){
    istream& is = read_i_stream(cin);
    cout << is.rdstate() << endl;
    return 0;
}