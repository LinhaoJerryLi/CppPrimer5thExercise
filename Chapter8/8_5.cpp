#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readInVector(ifstream &ifs, vector<string> &vword){
    string buffer;
    while(ifs >> buffer){
        vword.push_back(buffer);
    }
}
int main(){
    vector<string> vword;
    ifstream ifs("temp.txt");
    readInVector(ifs, vword);
    for (const auto &e: vword){
        cout << e << endl;
    }
    return 0;
}