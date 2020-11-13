#include <iostream>
using namespace std;\
int Uje(int d,int bin[])
{
    
    int x=1,y=0;
    for(int i=d-1; i>=1; i--)
    {
        if(bin[i]==0) y=y+x; 
        x=x*2;
    }
cout<<"-"<<y;
}
int Doda(int d,int bin[])
{
    int x=1,y=0;
    for(int i=d-1; i>=1; i--)
    {
        if(bin[i]==1) y=y+x; 
        x=x*2;
    }
cout<<y;
}
int main()
{
    int d;
    cin>>d;
    int bin[d];
    for(int i=0;i<d ;i++)
    {
        cin>>bin[i];
    }
    system("CLS");
    if(bin[0]==0) Doda(d,bin);
    else Uje(d,bin);

    return 0;
}