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
double pier(double p, double E)
{
    double a = p;
    while (abs(a - (p / a)) > E)
    {
        a = (a + (p / a)) / 2;
    }

    return a;
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

    default:
        cout << "brak funkcji";
        break;
    }

    return 0;
}