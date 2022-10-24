#include<iostream>
using namespace std;
int main()
{
    int n,i,m;
    bool b=0;
    cout<<"enter a number "<<endl;
    cin>>n;
    if(n>1)
    {cout<<"2"<<endl;}
     for(m=2;m<=n;m++)
     {
         for(i=2;i<m;i++)
         {
             if(m%i==0)
             {break;}
             else
         {cout<<m<<endl;
         break;}
         }
     }
      return 0;}
