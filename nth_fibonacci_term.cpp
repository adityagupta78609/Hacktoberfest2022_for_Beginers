#include<iostream>
using namespace std;
int main(){int n,t,res,a=0,b=1;
cout<<"enter the position of term "<<endl;
           cin>>n;
for(int i=0;i<n;i++){
    t=a;
    a=b;
    b=t+b;
    res=a;
}
           cout<<res;
           return 0;
}
