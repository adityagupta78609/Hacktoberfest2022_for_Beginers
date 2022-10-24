#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;                                                                         // pehle user se input liya rows aur columns ke liye
    cout<<"number of rows and number of columns"<<endl;                                     
    cin>>r>>c;
    for(i=1;i<=r;i++)                                                                      //  rows ke liye loop start kiya 
    {  if ((i==1) || (i==r ))                                                               // first aur last row saare jagah par * print kar
        { for(j=1;j<=c;j++) 
            {cout<<" * ";}}
       else                                                                               // baaki sabhi cases ke liye pehle ek * print karo fir spaces print karo fir 
           {                                                                                 // last column ke liye fir se *  print karo 
            cout<<" * ";
            for(j=2;j<c;j++)
            {cout<<"   ";}
            cout<<" * ";
           }
             cout<<endl;                                                                     //  dusre row pe jaane ke liye end line diya hai
    }
    return 0;
}
