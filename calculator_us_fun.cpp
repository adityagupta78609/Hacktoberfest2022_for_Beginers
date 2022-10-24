#include<iostream>
using namespace std;

int sum(int n1,int n2)
{
    int sum;
    sum=n1+n2;
    return sum;
}
void sub(int n1,int n2)
{if (n1>n2)
cout<<(n1-n2);
else
cout<<(n2-n1);}

void mul(int n1,int n2)
{cout<< n1*n2;}

void di(int n1,int n2)
{cout<<(n1/n2);}

int main()
{int n1,n2;
char ch;
cout<<"enter two numbers ";
cin>>n1>>n2;
cout<<" now enter operator";
cin>>ch;
switch (ch)
{case '+':
{cout<<sum(n1,n2);
break;}
case '-':
{sub(n1,n2);
break;}
case '*':
{mul(n1,n2);
break;}
case '/':
{di(n1,n2);
break;}
default :
{cout<<"invalid operator ";}}
    return 0;
}
