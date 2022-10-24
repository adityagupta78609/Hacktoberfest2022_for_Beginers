#include<iostream>
using namespace std;
int main()
{
    int n,i,k,j;
    cout<<"enter a number "<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {cout<<" * ";}
          
               for(k=1;k<=2*(n-i);k++)
                  {cout<<"   ";}
                   for(j=1;j<=i;j++)
                   {cout<<" * ";}
       cout<<endl;
    }
    
    for(i=n;i>0;i--)
    {   for(j=1;j<=i;j++)
        {cout<<" * ";}
        for(k=1;k<=2*(n-i);k++)
          {cout<<"   ";}    
               for(j=1;j<=i;j++)
        {cout<<" * ";}  
        cout<<endl;      
    }
    return 0;
}