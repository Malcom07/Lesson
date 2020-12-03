#include <cstdlib>
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;
main()
{
    auto start = high_resolution_clock::now();
    int T[1000]={0};
    for(int i=2; i<1000; i++)
    {
       if(T[i]==0)
       {    
           for(int j=i+i; j<1000; j+=i)
            {
                T[j]=1;
            }

       }

    }
    for (int i = 2; i < 1000; i++)
    {
        if(T[i]==0) cout<<i<<endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    return  duration.count() ;
}