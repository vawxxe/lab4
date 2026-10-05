#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double R;
    double xStart, xEnd, dX;
    double x, y;

    cout << "R = ";
    cin >> R;

    cout << "Xstart = ";
    cin >> xStart;

    cout << "Xend = ";
    cin >> xEnd;

    cout << "dX = ";
    cin >> dX;

    cout << fixed << setprecision(4);

    cout << "\n       x\t\t     y\n";
    cout << "-------------------------------\n";

    for (x = xStart; x <= xEnd; x += dX)
    {
        // Branch 1
        if (x < -6)
        {
            y = R;
        }

        // Branch 2
        else if (x < -R)
        {
            y = (x + R) / (6 - R);
        }

        // Branch 3
        else if (x < 0)
        {
            y = sqrt(pow(R, 2) - pow(x, 2));
        }

        // Branch 4
        else if (x <= R)
        {
            y = sqrt(pow(R, 2) - pow(x, 2));
        }

        // Branch 5
        else
        {
            y = R - x;
        }

        cout << setw(10) << x << "\t\t"
             << setw(10) << y << endl;
    }

    return 0;
}