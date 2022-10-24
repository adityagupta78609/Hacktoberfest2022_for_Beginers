
// Sample code to perform I/O:

#include <iostream>
#include<cmath>
using namespace std;
int pa(int x){
	if(x==0){
		return 1;
	}
	return (x-1)*pa(x-2);
}
int fac(int a)
{  if(a==1)
{return 1;}
return a*fac(a-1);
}
bool iseven(int k){
    int b=k,count=0;
    while(b!=0){
    b=b>>1;
     count++;
    }
    if(count%2==0){
        return false;
    }
    else {
        return true;
    }
}
int ncr(int p){
	int n,c;
	n=fac(p);
	c=fac(p-1);
	return n/c;
}

int main() {
	int t,n,i,result=0,even=0,odd=0,w=1;
	bool b;
	cin >>t>>n;										// Reading input from STDIN
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
	int arr[n];
	//bool arrb[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}

	for(i=0;i<n;i++){                      // checking even power of 2 or not
		b=iseven(arr[i]);
		if(b==1){
			arr[i]=1;
			even++;
		}
		else
		{
			arr[i]=0;
			odd++;
		}
	}
    // array changed in form of 1 and 0's
if(odd%2!=0){
     w=ncr(odd);                   //ncn-1 * n-2*n-4*.......1
	 odd=odd-1;
    w=w*pa(odd);
}
else{
w=pa(odd);
}
cout<<(w*(pow(2,odd+even)-1));
	return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
