// Print the factorials of first ‘n’ numbers
// Sample Input : 10

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int fact=1;

    for(int i = 1 ; i<=n ; i++)
    {
        fact = fact*i;
        cout<<fact<<endl;
    }
     
}