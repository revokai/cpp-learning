#include <iostream>
using namespace std;

int main()
{
    float p, r, t;

    cout << "Enter Principal Amount: ";
    cin >> p;

    cout << "Enter Rate: ";
    cin >> r;

    cout << "Enter Time (in years): ";
    cin >> t;

    float si = (p * r * t) / 100;

    cout << "Simple Interest = " << si << endl;

    return 0;
}
