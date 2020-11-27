#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
int T[50];
int i;
int long x=0;
int y=0;
srand(time(NULL));
// wprowadzenie elementow do tablicy - losowo
for (i=0; i<50; i++)
	T[i]=rand()%101;
	
// wyswietlanie elementow tablicy

for (i=0; i<50; i++)
	cout<<T[i]<<" ";

//element najwiêkszy w tablicy	

    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]>x)
        {
            x=T[i];
        }
    }
cout<<"Najwiekszy element "<<x<<endl;

//suma elementów
x=0;
for(int i=0 ; i<50 ; i++)
    {
         x+=T[i];
    }
   cout<<"suma elemntow "<<x<<endl; 

//srednia elementów
x=0;
    for(int i=0 ; i<50 ; i++)
    {
            x+=T[i];
    }

   cout<<"srednia elemntow "<<x/50<<endl; 
//znajdowanie zadanej wartosci w tablicy

x=0, y=0;
cin>>x;
    for(int i=0 ; i<50 ; i++)
    {
          if(x==T[i])
          {
              cout<<"jest na miejscu "<<i<<endl;
              y++;
          }
    }

 cout<<"liczba wystepuje w tableli  "<<y<<" razy"<<endl;

//iloczyn elementów podzielnych przez k=10
x=1;
    for(int i=0 ; i<50 ; i++)
    {
        if(T[i]%10==0)
        {
            x*=T[i];
        }
    }

   cout<<"iloczny elemntow podzielnych przez 10 "<<x<<endl; 
//zamiana elementow miejscami - pierwszy z ostatnim, drugi z przedostatnim itd.

x=0, y=49;
    for(int i=0 ; i<25 ; i++)
    {
        x=T[y];
        T[y]=T[i];
        T[i]=x;
        y--;
    }
for (i=0; i<50; i++)
	cout<<T[i]<<" ";

return 0;
}

