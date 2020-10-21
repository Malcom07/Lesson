#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
void test(int *a)
    {
        cin>>a[1];
    }
int main()
{
    int a[8];
    int T[5] = {0,0,0,4};
    cout <<setw(7)<< *(T+1);
    test(a);
    cout<<"\n"<<a[1];
    return 0;
}
