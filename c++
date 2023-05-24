#include <iostream>

using namespace std;

int main(void)
{

    int a = 0, b = 0, c = 0;
    cout << "Enter divided: ";
    cin >> a;
    cout << "Enter divider: ";
    cin >> b;
    try
    {
        if (b == 0)
            throw "You cannot divide by zero!";
        c = a / b;
        cout << c << endl;
    }
    catch (...)
    {
        cout << "You cannot divide by zero\n";
    }

    return 0;
}
