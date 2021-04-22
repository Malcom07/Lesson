#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
main()
{
    int n=10;
    int A[10]={5,99,3,7,111,13,4,24,4,8};
    int p=0;
    int a=0;
    while (p<n)
    {
        a=(p+n)/2;
        if (A[a]%2==0)
        {
            n=a;
        }
        else 
        {
            p=a+1;
        }
    } 
    cout << A[a] << endl;
    












    return 0;
}