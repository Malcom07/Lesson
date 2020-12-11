#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));
    int T[50], j=0,i=0,k=0,n=50,p=0;
    for(int i=0; i<50 ; i++ )
    {
        T[i]=rand()%(100);

    }
   
//wstawianko
/*
for(i=0;i<n;i++)
{
    k=i;
    for(j=i+1 ; j<n ; j++)
        if(T[j]<T[k]) k=j;
    swap(T[i],T[k]);
}
*/
//wysiąganko
/*
for(i=1;i<n;i++)
{
    p=T[i];
    j=i-1;
    while(j>=0 && T[j]>p)
        {
          T[j+1]=T[j];  
            j--;

        }
    T[j+1]=p;
}
*/



//bombelek
for ( j=n-1; j>0;j--)
{

    for(i=0; i<j;i++)
        {
            if(T[i+1]<T[i]) swap(T[i], T[j+1]);
        }
}

























  for(int i=0; i<50 ; i++ )
    {
        cout << T[i] << endl;

    }



    return 0;
}