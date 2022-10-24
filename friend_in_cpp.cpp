#include<iostream>
using namespace std;


class complex;


class calculator{
    public:
    void sum(complex,complex,complex);

};


class complex{
    int a,b;
    friend class calculator;
    public:
    void setdata(int a1,int b1){
        a=a1;
        b=b1;
    }
    void getdata(){
        cout<<"entered complex number is "<<a<<" + i"<<b<<endl;
    }
};


void calculator::sum(complex c1,complex c2,complex c3) {
    
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    cout<<"sum of above two complex numbers is "<<c3.a<<" + i"<<c3.b<<endl;
   }

int main()
{int a,b;
complex c1,c2,c3;
calculator c;
cout<<"enter real and imaginary part of complex number"<<endl;
cin>>a>>b;

c1.setdata(a,b);
c1.getdata();
cout<<"enter real and imaginary part of complex number"<<endl;
cin>>a>>b;
c2.setdata(a,b);
c2.getdata();
c.sum(c1,c2,c3);
return 0;
}