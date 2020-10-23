#include <iostream>
using namespace std;
int silnia(int n)
{
    if (n==0) return 1;
    else return silnia(n-1)*n;
}
int fibo(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else return fibo(n-1)+fibo(n-2);
}
int NWD(int n, int m)

{
    if (n!=m)
    if (n>m) return NWD(n-m,m);
    else return NWD(n,m-n);
  return n; ;
}
int pot(int n, int m)
{
    if(m==0) return 1;
    else return n=n*pot(n,m-1);

}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    cout<<silnia(n)<<endl<<fibo(n)<<endl<<NWD(n,m)<<endl<<pot(n,m)<<endl;
    system("pause");


    return 0;
}