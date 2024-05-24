// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :

// 1 1 2 3 5 8 13 21 34 55

#include<iostream>
using namespace std;
int main()
{
    int a = 1 ;
    int b = 1 ;
    int s = a + b;
    int count = 1;


    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<a<<" "<<b<<" ";
    while(count!=n-1)
    {
        cout<<s<<" ";
        a = b;
        b = s;
        s = a+b;
         
        count++;
    }
}