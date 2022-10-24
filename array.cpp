#include<iostream>
using namespace std;

int main()
{int n,i,max,min;
cout<<"enter number "<<endl;
cin>>n;
int arr[n];                                                                 //taking size of array and then forming an array
for(i=0;i<n;i++)                                                           // loop for taking inputs
{cin>>arr[i];}
max=arr[0];
min=arr[0];
for(i=0;i<n;i++)
{if(arr[i]>=max)
{max=arr[i];}
if(arr[i]<=min)
{min=arr[i];}
}
cout<<"max ="<<max<<endl<<"min ="<<min;
return 0;
}
