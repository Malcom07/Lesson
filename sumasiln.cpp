#include <iostream>
#include<cstdlib>
#include <ctime>
#include <string>
using namespace std;
int siln(int n)
	{

		int s=1;
		int i=1;
		while(i<=n)
		{
			s*=i;
			i++;
		}
		return s;
	}
int sums(int n)
	{

		int x=0,y=0;
		while(n>0)
		{
	
			x=n%10;
			y+=siln(x);
			n=n/10;
		}
		
		return y;
}
int main()
{
	srand(time(NULL));
	int l, x=0;
	for(int i=0; i<500; i++)
	{
	l=1+rand()%(100000-1+1);
	int w=sums(l);
	if(l==w)
		cout<<l<<endl;
	
	}
		
	return 0;
}
