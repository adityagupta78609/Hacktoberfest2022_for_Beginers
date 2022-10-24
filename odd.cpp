#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter number ";
    cin>>n;
    cout<<"\n all odd numbers from 1 to "<<n<<" are "<<endl;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {continue;}
        else
        {cout<<i<<","; }
    }
    return 0;
}