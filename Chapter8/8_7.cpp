#include <iostream>
#include <fstream>

#include "./sales_data.h"

using std::cerr;
using std::endl;

Sales_data total;
int main(int argc, char **argv)
{
    std::ifstream ifs(argv[1]);
    std::ofstream ofs(argv[2]);
    if (read(ifs, total))
    {
        Sales_data trans;
        while (read(ifs, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(ofs, total) << endl;
                total = trans;
            }
        }
        print(ofs, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
}
