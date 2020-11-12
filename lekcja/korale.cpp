#include <iostream>
#include <cmath>
using namespace std;
int koraleBis(int n)
{
   int x=log2(2*n);
   char TAB[x];
   for(int i=0; i<x; i++)
   {
       if(n==1) TAB[i]='C';
        else if(n%2==0) 
        {
            TAB[i]='B';
            n=n/2;
        }
            else if (n%2!=0) 
            {
            TAB[i]='C';
            n=(n-1)/2;
            }
   }
    for(int i=x-1; i>=0; i--)
    {
        cout<<"-"<<TAB[i]<<"-";
    }

}
int main()
{
    int n;
    cin>>n;
    koraleBis(n);

    return 0;
}