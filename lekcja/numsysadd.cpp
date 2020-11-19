#include <iostream>
using namespace std;
int main()
{
    int p=0, n=0, c=0;
    cin>>p>>n;
    int A[10]={0};
    int B[10]={0};
    int C[11]={0};
    cout<<"A"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"B"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>B[i];
    }
    system("CLS");
    for( int i=5-1; i>=0; i--)
    {
        if(A[i]+B[i]+C[c]>=p)
        {
            C[c]=C[c]+(A[i]+B[i]-p);
            C[c+1]=C[c+1]+1;
        }
        else
        {
            C[c]=C[c]+(A[i]+B[i]);
        }
        c++;
    }

    for(int i=c; i>=0; i--)
    {
        cout<<C[i]<<",";

    }




    return 0;
}