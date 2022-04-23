#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readInVector(ifstream &ifs, vector<string> &vline){
    string buffer;
    while(getline(ifs, buffer)){
        vline.push_back(buffer);
    }
}
int main(){
    vector<string> vline;
    ifstream ifs("temp.txt");
    readInVector(ifs, vline);
    for (const auto &e: vline){
        cout << e << endl;
    }
    return 0;
}