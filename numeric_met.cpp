#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

double F(double x)
{
    return x + 5;
}
double F2(double x)
{
    return x * x - 3 * x - 10;
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
double pier(double p, double E)
{
    double a = p;
    while (abs(a - (p / a)) > E)
    {
        a = (a + (p / a)) / 2;
    }

    return a;
}
double Frac(double p, double q, double n)
{
    double s = 0, d = 0;
    d = (q - p) / n;
    for (int i = 1; i <= n; i++)
    {
        s += abs(F2(p + d * i - d / 2));
    }

    return d * s;
}
double Ftap(double p, double q, double n)
{
    double s = 0, d = 0;
    d = (q - p) / n;
    for (int i = 1; i < n; i++)
    {

        s += abs(F2(p + d * i));
    }

    return (abs(F2(p)) + abs(F2(q)) + 2 * s) * d / 2;
}
main()
{
    int sw = 0;
    cin >> sw;
    switch (sw)
    {
    //miejsce zerowe funkcji "F"
    case 1:
        system("CLS");

        double p, q, E1;
        cin >> p >> q >> E1;
        system("CLS");
        cout << null(p, q, E1);
        break;

    //pierwiastek z liczby nie ujemnej | zminenna "o"->"p"
    case 2:
        system("CLS");

        double o, E;
        cin >> o >> E;
        system("CLS");
        cout << pier(o, E);
        break;
    //pole pod funkcja sposob prostokat i trapez
    case 3:
        system("CLS");
        double p1, q1, n1;
        cin >> p1 >> q1 >> n1;
        system("CLS");
        cout << "prostokat:" << Frac(p1, q1, n1)<<endl;
        cout << "trapez:" << Ftap(p1, q1, n1)<<endl;
        break;
    default:
        cout << "brak funkcji";
        break;
    }
    system("pause");
    return 0;
}