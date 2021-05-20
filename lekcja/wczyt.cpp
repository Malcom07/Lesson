#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream input;
ofstream output;
//factorial from "n" for p5
int silnia(int n)
{
    int s=1;   
    for (int i = 1; i <=n; i++)
    {
        s=i*s;
    }
    return s;
}
//digit on position "k" from number "n" for p5
int cyfra(int n, int k)
{
    int x=0;
    for (int i = 0; i < k; i++)
    {
        x=n%10;
        n=n/10;
    }
    return x;


}
//*number of even numbers in file
void p1()
{
    input.open("liczby.txt");
    int a, b=0;
    for (int i = 0; i < 500; i++)
    {
        input>>a;
        if(a%2==0) b++;
    }
    input.close();
    output.open("wyniki.txt", ios::app);
    output<<"   zad 1\n"<<b<<endl;
    output.close();




}
//*bigest number form file
void p2()
{
    input.open("liczby.txt");
    int a, b=0;
    for (int i = 0; i < 500; i++)
    {
        input>>a;
        if(a>b) b=a;
    }
    input.close();
    output.open("wyniki.txt", ios::app);
    output<<"   zad 2\n"<<b<<endl;
    output.close();
}
//*prime numbers from file
void p3()
{
    input.open("liczby.txt");
    output.open("wyniki.txt", ios::app);
    int a, b=0, j=2;
    output<<"   zad 3\n";
    for (int i = 0; i < 500; i++)
    {
        input>>a;
        j=2;
        while(j<=sqrt(a))
        {
            if(a%j==0) a=0;
            j++;
        }
        if(a!=0 && a!=1) output<<a<<endl;
    }
    input.close();
    output.close();
}
//*Perfect numbers from file
void p4()
{
    input.open("liczby.txt");
    int a=0, b=0, c;
    for (int i = 0; i < 500; i++)
    {
        input>>a;
        c=0;
        for (int i = 1; i <=a/2; i++)
        {
            if(a%i==0) c+=i;
        
        }
        if(c==a) b++;
    }
    input.close();
    output.open("wyniki.txt", ios::app);
    output<<"   zad 4\n"<<b<<endl;
    output.close();
}
//*numbers equal to the sum of the digits of its factorial
void p5()
{  
    input.open("liczby.txt");
    output.open("wyniki.txt", ios::app);
    output<<"   zad 5\n";
    int a, b=0;
    for (int i = 0; i < 500; i++)
    {
        int len;
        input>>a;
        len=log10 (a)+1;
        b=0;
        for (int i = 1; i <=len; i++)
        {
            b+=silnia(cyfra(a,i));
        }
        if(b==a) output<<a<<endl;

    }
    input.close();

    output.close();
}
main()
{
    // clear the file 
    output.open("wyniki.txt");
    output.close();
    // inicating the functions 
    p1();
    p2();
    p3();
    p4();
    p5();
    return 0;
}