#include <iostream>
#include<cstdlib>
#include <ctime>
#include <string>
using namespace std;
bool suma(int n)
	{
		int x=0;
		for(int i=0; i<3; i++)
		{
			x+=n%10;
			n=n/10;

		}
	 if(x==10)
	 	return true;
	else
		return false;
	}

int main()
{
	srand(time(NULL));
	int l;
	for(int i=0; i<100; i++)
	{
		
	l= 100+rand()%(200-100+1);
	if(suma(l)) cout<<l<<endl;
		
	}
	
	
	return 0;
}
