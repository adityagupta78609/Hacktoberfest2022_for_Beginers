#include <iostream>
#include <cstdio>
using namespace std;
void demo(int i)
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<arr[i]<<endl;
}
int main() {
    // Complete the code.
    int a,b,i;
    cin>>a;
    
    cin>>b;
    for(i=a;i<=b;i++)
    {
        if(i<=9){demo(i);}
        else{
            if(i%2==0)
            cout<<"even"<<endl;
            else 
            cout<<"odd"<<endl;
        }
    }
    return 0;
}