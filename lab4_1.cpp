#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = ";
    cin >> N;

    S = 0;
    i = N;

    while (i <= 22)
    {
        S += sqrt(i * i + N * N) / i;
        i++;
    }

    cout << fixed << setprecision(6);
    cout << "while:      " << S << endl;

    S = 0;
    i = N;

    do
    {
        S += sqrt(i * i + N * N) / i;
        i++;
    }
    while (i <= 22);

    cout << "do...while: " << S << endl;

    S = 0;

    for (i = N; i <= 22; i++)
    {
        S += sqrt(i * i + N * N) / i;
    }

    cout << "for ++:     " << S << endl;

    S = 0;

    for (i = 22; i >= N; i--)
    {
        S += sqrt(i * i + N * N) / i;
    }

    cout << "for --:     " << S << endl;

    return 0;
}
