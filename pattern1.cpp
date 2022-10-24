#include<iostream>
//#include<bits/stdc++.h>
/*
pattern :- 

5 4 3 2 *
5 4 3 * 1
5 4 * 2 1 
5 * 3 2 1 
* 4 3 2 1 

*/
using namespace std;
int main()
{
int size;
cout<<"enter size for pattern"<<endl;
cin>>size;
for(int i = 1 ; i <= size ; i++){
    for(int j = size ;j > 0 ;j--){
        if(j == i){
            cout<<"* ";
        }
        else{
            cout<<j<<" ";
        }
    }
    cout<<endl;
}


return 0;
}