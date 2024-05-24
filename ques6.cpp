// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int digits = 0 ;
    int sum1 = 0 ;
    int sum2 = 0 ;
    int sum3 = 0 ;
    int dc = n;
    int sc = n;
    int rc = n;
    int rnum = 0;
    //to count digits
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
    
    // to reverse number
    for(int i=1 ; i<=digits ; i++)
    {
        int b = rc%10;
        rnum = rnum*10 + b;
        rc=rc/10;
    }
    cout<<"Reverse of number is: "<<rnum<<endl;
    
     
    cout<<"Final sum is: "<<n+rnum<<endl;
}