// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int digits = 0 ;
    int sum = 0 ;
    int dc = n;
    int sc = n;
    if(n==0)
    {
        cout<<"Number of digits is 1"<<endl;
    }
    else
    {
    while(dc>0)
    {
        dc=dc/10;
        digits++;
    }
    cout<<"Number of digits in n is "<<digits<<endl;
    }

    for(int i=1 ; i<=digits ; i++)
    {
        int r = sc%10;
        sc=sc/10;
        if(r%2==0)
        {
            sum = sum + r;
        }
    }
    cout<<"Sum of even digits: "<<sum;
}