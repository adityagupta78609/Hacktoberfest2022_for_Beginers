#include<iostream>
#include<string>
using namespace std;
void get(string,int);

int main()
{string str;
cout<<"enter string";
getline(cin,str);
get(str,0);
    return 0;
}
void get(string s,int k)
{int l=s.length();
    if (k<l){
    if((s[k]=='p')&&(s[k+1]=='i'))
    {
        s.erase(k,2);
        s.insert(k,"3.14");

    }
    get(s,k+1);}
    if(k==l)
    {cout<< s;}
    
}