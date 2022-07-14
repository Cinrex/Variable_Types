#include <iostream>
using namespace std;

int main()
{
    int big = 2000000000;
    int small = 1000000000;
    string text = "Text";
    
    double sum = 0;
    long razn = 0;

    sum = (double)big + small;
    razn = (small - big);

    cout << "sum=" << sum << "\t" << "razn=" << razn << "\n";
    cout << text << endl;

    return 0;
}
