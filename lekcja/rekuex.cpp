#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int zad1(int n)
{
    if (n==1) return 2;
    else 
    {
        if(n%2 == 0)
        {
            return 2+zad1(n-1); 
        }
        else 
        {
            return 2*zad1(n-1);
        }
    }
}
int zad2(int n)
{
    if (n==1) return -1;
    else if(n>1) return -(zad2(n-1))*n-3;
}
long double zad3(int n)
{
    if (n==1) return -1;
    else if(n==2) return 0.5;
    else if (n>2) return -(zad3(n-1))*zad3(n-2);

}
int zad4(int n)
{
    if (n>0 && n<1020)
    {
        return n%10 + zad4(n/10);
    }

}

main()
{
    int n, m, x;
    cin>>n>>m>>x;
    system("CLS");
    cout<<zad1(n)<<"\n"<<zad2(n)<<"\n"<<zad3(m)<<"\n"<<zad4(x);


    return 0;
}