#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setw(12) << showpos << 4.0 << noshowpos << endl;
    cout << setw(17) << fixed << setprecision(2) << internal << -67.09124 << endl;
    cout << setw(10) << 235 << noshowpos << endl;

}