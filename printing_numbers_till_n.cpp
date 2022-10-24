#include<iostream>
using namespace std;
void printdec (int n)
{
    if(n==0)
    {return;}
    cout<<n<<endl;
     printdec(n-1);
}
void printinc (int n)
{
    if(n==0)
    {return;}
     printinc(n-1);
     cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    printdec(n);
    printinc(n);
}