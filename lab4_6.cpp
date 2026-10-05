#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double P, S;
    int n, k;

    // 1. while + while
    P = 1;
    n = 1;

    while (n <= 20)
    {
        S = 0;
        k = n;

        while (k <= 20)
        {
            S += k;
            k++;
        }

        P *= (n * n + S * S) / (n + 1);
        n++;
    }

    cout << fixed << setprecision(6);
    cout << "while:      " << P << endl;


    // 2. do...while + do...while
    P = 1;
    n = 1;

    do
    {
        S = 0;
        k = n;

        do
        {
            S += k;
            k++;
        }
        while (k <= 20);

        P *= (n * n + S * S) / (n + 1);
        n++;
    }
    while (n <= 20);

    cout << "do...while: " << P << endl;


    // 3. for ++ + for ++
    P = 1;

    for (n = 1; n <= 20; n++)
    {
        S = 0;

        for (k = n; k <= 20; k++)
        {
            S += k;
        }

        P *= (n * n + S * S) / (n + 1);
    }

    cout << "for ++:     " << P << endl;


    // 4. for -- + for --
    P = 1;

    for (n = 20; n >= 1; n--)
    {
        S = 0;

        for (k = 20; k >= n; k--)
        {
            S += k;
        }

        P *= (n * n + S * S) / (n + 1);
    }

    cout << "for --:     " << P << endl;

    return 0;
}