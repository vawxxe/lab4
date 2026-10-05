#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    double R, x, y;

    cout << "R = ";
    cin >> R;

    srand((unsigned)time(NULL));

    // First 10 points
    for (int i = 0; i < 10; i++)
    {
        cout << "x = ";
        cin >> x;

        cout << "y = ";
        cin >> y;

        if ((x >= -R && x <= 0 &&
             y >= 0 && y <= R &&
             (x + R) * (x + R) + (y - R) * (y - R) <= R * R)
            ||
            (x >= 0 && x <= R &&
             y >= -R && y <= 0 &&
             (x - R) * (x - R) + (y + R) * (y + R) <= R * R))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    cout << endl << fixed;

    // Next 10 random points
    for (int i = 0; i < 10; i++)
    {
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        if ((x >= -R && x <= 0 &&
             y >= 0 && y <= R &&
             (x + R) * (x + R) + (y - R) * (y - R) <= R * R)
            ||
            (x >= 0 && x <= R &&
             y >= -R && y <= 0 &&
             (x - R) * (x - R) + (y + R) * (y + R) <= R * R))
        {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y
                 << " yes" << endl;
        }
        else
        {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y
                 << " no" << endl;
        }
    }

    return 0;
}