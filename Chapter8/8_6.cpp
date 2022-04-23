#include <iostream>
#include <fstream>

#include "./sales_data.h"

using std::cerr;
using std::cout;
using std::endl;

Sales_data total;
int main(int argc, char **argv)
{
    std::ifstream ifs(argv[1]);
    if (read(ifs, total))
    {
        Sales_data trans;
        while (read(ifs, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
}
