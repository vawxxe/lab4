#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    double xStart, xEnd, dX;
    double x, F;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "Xstart = ";
    cin >> xStart;

    cout << "Xend = ";
    cin >> xEnd;

    cout << "dX = ";
    cin >> dX;

    cout << fixed << setprecision(4);

    cout << "\n       x\t\t     F\n";
    cout << "-------------------------------\n";

    for (x = xStart; x <= xEnd; x += dX)
    {
        if (x < 0.6 && b + c != 0)
        {
            F = a * pow(x, 2) + pow(b, 2) + c;
        }
        else if (x > 0.6 && b + c == 0)
        {
            F = (x - a) / (x - c);
        }
        else
        {
            F = x / c + x / a;
        }

        cout << setw(10) << x << "\t\t" << setw(10) << F << endl;
    }

    return 0;
}