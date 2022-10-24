#include<iostream>
using namespace std;
int main()
{int n,j,i;
cout<<"enter order"<<endl;
cin>>n;
int arr[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{ cin>>arr[i][j];}

}
cout<<"entered matrix"<<endl;
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{ cout<<arr[i][j]<<"\t";}
cout<<endl;}

cout<<"transpose of matrix"<<endl;
for(j=0;j<n;j++)
{
    for(i=0;i<n;i++)
    {
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
return 0;}