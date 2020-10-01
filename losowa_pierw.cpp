#include <iostream>
#include<cstdlib>
#include <ctime>
bool pierw(int n)
	{
		if(n<2)
			return false;
	
			for(int i=2; i*i <=n; i++)
				if(n%i==0)
					return false;
			
		return true;
	}
using namespace std;
int main()
{
	srand(time(NULL));
	int l;
	for(int i=0; i<100; i++)
	{
		
	l=rand()%(200+1);
	if(pierw(l)) cout<<l<<endl;
		
	}
	
	
	return 0;
}
