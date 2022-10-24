// Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements. 

/* 1 2 3 4 5 6 7 8 
d=3 , n=8
4 5 6 7 8 1 2 3 
d=4 , n=8
5 6 7 8 1 2 3 4
d=5 , n=8
6 7 8 1 2 3 4 5
*/
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int d, int n);
void swap(int arr[],int start1 , int start2 ,int noe);
//not is number of elements
// start 1 is starting index for first subarray 
// start2 is starting index of 2nd subarray
int main()
{
int n,d;
cout<<"enter size of array : "<<endl;
cin>>n;
int arr[n];
for(int i =0 ;i<n ;i++){
    cin>>arr[i];
}
cout<<"enter value of d : "<<endl;
cin>>d;
// d is index+1
rotate(arr,d,n);
cout<<"after rotation"<<endl;
for(int i =0 ;i<n ;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
void rotate(int arr[],int d, int n){
    
    // base condition
    if(d==0 || d==n){
        return;
    }
    if(d > n){
        d =d%n;
    }
    
    //if d divides array into two equal subarrays
    if(d == n-d){
        swap(arr,0,d,d);
        return;
    }

    //if subarray A is smaller than subarray B (1st < 2nd)
    if(d < n-d){
        swap(arr,0,n-d,d);
        rotate(arr,d,n-d);
    }

    //if subarray A is bigger than subarray B (1st > 2nd)
    if(d > n-d){
        swap(arr,0,d,n-d);
        rotate(arr+n-d ,2*d-n,d);
    }


}

void swap(int arr[],int start1 , int start2 ,int noe){

 int i, temp;
    for(i = 0; i < noe; i++)
    {
        temp = arr[start1 + i];
        arr[start1 + i] = arr[start2 + i];
        arr[start2 + i] = temp;
    }
}