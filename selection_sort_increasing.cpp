#include<iostream>
using namespace std;
int main()
{int n,min,temp;
cout<<"enter length of array ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
min=arr[i];
for(int j=i+1;j<n;j++){
if(arr[j]<min){
    temp=min;
    min=arr[j];
    arr[j]=temp;
}
}
arr[i]=min;
}
cout<<"sorted array "<<endl ;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}