#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int F(int n)
{
    int s;
    if (n==1 || n==2) s=n;
    else{
        s=n*F(n-2);
        
    }
    s=s*(n+1);
    return s;
}
main()
{
    int n;
    cin>>n;
    cout<<F(n);



    return 0;

}