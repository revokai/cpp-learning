#include <iostream>
using namespace std;

int main()
{
    float radius;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    float volume = 1.3333 * 3.141592 * radius * radius * radius;

    cout << "Volume of the sphere = " << volume << endl;

    return 0;
}
