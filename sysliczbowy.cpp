#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
main()
{
    string d;
    cin>>d;
    double x=0.25;
    double w=0;
    for(int i=d.size(); i>=0; i--)
    {
        cout<<d[i-1]<<endl;
        if(d[i-1]=='1')  w=w+x;
        if(d[i-1]!=',') x=x*2;
    }
    cout<<w;


    return 0;
}