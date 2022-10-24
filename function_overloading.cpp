#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);
int sum(int a,int b,int c,int d);


int main(){
  int a=50,b=60,c=70,d=80;
cout<<endl<<sum(a,b);
cout<<endl<<sum(a,b,c);
cout<<endl<<sum(a,b,c,d);
return 0;
}


int sum(int a,int b)
{return a+b;}
int sum(int a,int b,int c)
{ return a+b+c;}
int sum(int a,int b,int c,int d)
{ return a+b+c+d;}


