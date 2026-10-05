#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double xStart, xEnd, dX;
    double x, y;

    cout << "Xp = ";
    cin >> xStart;

    cout << "Xk = ";
    cin >> xEnd;

    cout << "dX = ";
    cin >> dX;

    cout << fixed << setprecision(4);

    cout << "\n       x\t\t     y\n";
    cout << "-------------------------------\n";

    for (x = xStart; x <= xEnd; x += dX)
    {
        if (x == 0)
        {
            cout << setw(10) << x << "\t\t" << "undefined" << endl;
            continue;
        }

        y = (2 + x) / pow(x, 2) + 1;

        if (x < 0)
        {
            y += pow(x, 3) - 2 * pow(x, 4);
        }
        else if (x <= 2)
        {
            y += pow(abs(x) + exp(x), 3);
        }
        else
        {
            y += 4 * cos(pow(x, 2) - 2);
        }

        cout << setw(10) << x << "\t\t" << setw(10) << y << endl;
    }

    return 0;
}