#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xStart, xEnd, dx, eps;
    double x, a, R, S;
    int n;

    cout << "xStart = ";
    cin >> xStart;

    cout << "xEnd = ";
    cin >> xEnd;

    cout << "dx = ";
    cin >> dx;

    cout << "eps = ";
    cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------------------" << endl;
    cout << "|" << setw(8) << "x" << " |"
         << setw(12) << "atan(x)" << " |"
         << setw(12) << "S" << " |"
         << setw(8) << "n" << " |" << endl;
    cout << "-------------------------------------------------------------" << endl;

    x = xStart;

    while (x <= xEnd)
    {
        n = 0;

        a = -1.0 / x;
        S = -acos(-1.0) / 2 + a;

        do
        {
            n++;

            R = -(2.0 * n - 1) / ((2.0 * n + 1) * x * x);
            a *= R;
            S += a;

        } while (abs(a) >= eps);

        cout << "|" << setw(8) << setprecision(4) << x << " |"
             << setw(12) << setprecision(6) << atan(x) << " |"
             << setw(12) << setprecision(6) << S << " |"
             << setw(8) << n << " |" << endl;

        x += dx;
    }

    cout << "-------------------------------------------------------------" << endl;

    return 0;
}