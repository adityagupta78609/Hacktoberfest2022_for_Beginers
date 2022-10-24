#include<iostream>
using namespace std;
int bin(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)                                                                 
    {fac=fac*i;}  
    return fac; 
}
int main()
{int n1,r1;
cout<<"enter 'n' and 'r' to find nCr"<<endl;
cin>>n1>>r1;
int ans=bin(n1)/(bin(r1)*bin(n1-r1));
cout<<ans;

return 0 ;
}
