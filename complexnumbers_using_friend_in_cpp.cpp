#include<iostream>
using namespace std;


class complex;                              // forward declaration of complex class


class calculator{                           // declaration of calculator class
    public:
    void sum(complex,complex,complex);         // declaration of function sum

};


class complex{                                  // writing code of complex class 
    int a,b;
    friend class calculator;                      // making clculator class as this class friend
    public:
    void setdata(int a1,int b1){                //function for taking input
        a=a1;
        b=b1;
    }
    void getdata(){                                                   //function for printing value of complex numbers
        cout<<"entered complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};


void calculator::sum(complex c1,complex c2,complex c3) {                      // code of sum function after defining complex function so that complex data type can be used in sum fumction
    
    c3.a=c1.a+c2.a;                                   //adding real parts
    c3.b=c1.b+c2.b;                                  //adding complex parts
    cout<<"sum of above two complex numbers is "<<c3.a<<" + "<<c3.b<<"i"<<endl;         
   }

int main()                                         // main function
{int a,b;                                          //variables for taking values of real part and imaginary part
complex c1,c2,c3;                           // declaring three objects of comolex data types
calculator c;                           //declaing object of calculator data type for calling functions of calculator class

cout<<"enter real and imaginary part of complex number"<<endl; // taking input for realand imaginary part
cin>>a>>b;

c1.setdata(a,b);
c1.getdata();
cout<<"enter real and imaginary part of complex number"<<endl;
cin>>a>>b;
c2.setdata(a,b);
c2.getdata();
c.sum(c1,c2,c3);                                 //calling sum function
return 0;
}