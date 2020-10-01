#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
bool pote(int n)
	{
		if(n<=1)
			return false;
		for(int i=1; i<=n; i*=3)
			if(i==n)
				return true;
		return false;
	}

int main()
{
	srand(time(NULL));
	int l, x=0;
	for(int i=0; i<500; i++)
	{
	l=1+rand()%(100000-1+1);
	if(pote(l)) x++;
	
	}
	cout<<"odp to "<<x<<endl;
	
	return 0;
}
