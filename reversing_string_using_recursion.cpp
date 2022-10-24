#include<iostream>
using namespace std; 
void rev(string str)
{if (str.length()==0)
return ;
    string s;
    s=str.substr(1);
    rev(s);
    cout<<str[0];
}
int main ()
{string str;
cout<<"enter string"<<endl;
getline(cin,str);
rev(str);
    return 0;
}