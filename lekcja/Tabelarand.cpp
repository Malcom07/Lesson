#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void point1(int T[50])
{
    for (int i = 0; i < 50; i++)
    {
        T[i] = rand() % (100 + 1);
    }
}
void point2(int T[50])
{
    cout<<"point2:"<<endl;
    for (int i = 0; i < 50; i++)
    {
        cout << " " << T[i];
    }
}
void point3(int T[50])
{
    int x=0, y=0;
    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]>70)
        {
            x+=T[i];
            y++;
        }
    }
    cout<<"\npoint3:\n"<<x/y;
}
void point4(int T[50])
{
    int y=0;
    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]%2==0)
        {
            y++;
        }
    }
    cout<<"\npoint4:\n"<<y;
}
void point5(int T[50])
{
    int x=0;
    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]>x)
        {
            x=T[i];
        }
    }
    cout<<"\npoint5\n"<<x;
}
void point6(int T[50])
{
    int x=0;
    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]<50)
        {
            x+=T[i];
        }
    }
    cout<<"\npoint6\n"<<x;
}
void point7(int T[50])
{
    int x=0, y=0;
    cout<<endl;
    cin>>x;
    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]==x)
        {
            y++;
        }
    }
    cout<<"point7\n"<<y;
}
void point8(int T[50])
{
    int x=0, y=0;
    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]%3==0)
        {
            x+=T[i];
            y++;
        }
    }
    cout<<"\npoint8\n"<<x/y;
}
int main()
{
    int T[50] = {0};
    srand(time(NULL));
    point1(T);
    point2(T);
    point3(T);
    point4(T);
    point5(T);
    point6(T);
    point7(T);
    point8(T);   
    return 0;
}