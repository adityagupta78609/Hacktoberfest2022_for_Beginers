#include<iostream>
using namespace std;
class student{
    private:
    string subject;
    int marks;
    public:

void setdata(){
cout<<"enter subjects and then marks"<<endl;
cin>>subject>>marks;
}
void getdata(){
    cout<<"you got "<<marks<<" marks in "<<subject<<endl;
}
};
int main()
{int n,i;
cout<<"enter number of subjects"<<endl;
cin>>n;
student aditya[n];
for(i=0;i<n;i++){
    aditya[i].setdata();
     aditya[i].getdata();
}
// for(i=1;i<=n;i++){
   
// }
return 0;
}