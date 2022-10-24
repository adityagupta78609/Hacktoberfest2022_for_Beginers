#include<iostream>
using namespace std;
int power(int n,int p)
{
  if (p==0)
  return 1;
  int pro=power( n,p-1);
  pro=n*pro;
  return pro;
}
int main()
{int n,p; 
cout << " enter number and power"<<endl;
cin>>n>>p;
cout<<power(n,p);
    return 0;
}