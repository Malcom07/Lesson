#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;
double F(double x)
{
    return x + 5;
}
double null(double p, double q, double E1)
{
    double s;
    while (F(p) != 0 && F(q) != 0 && q - p >= E1)
    {
        s = (p + q) / 2;
        if (F(p) * F(s) < 0)
        {
            q = s;
        }
        else
        {
            p = s;
        }
    }

    return s;
}

main()
{
    double p, q, E1;
    cin >> p >> q >> E1;
    system("CLS");
    cout << null(p, q, E1);

    return 0;
}