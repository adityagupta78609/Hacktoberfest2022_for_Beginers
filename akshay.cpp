
// Sample code to perform I/O:

#include <iostream>

using namespace std;
// int counter=0;
int main() {
	int test,couple;
	cin >> test;
	int ans[test],per[test];
	for(int i=0;i<test;i++){
		int count=0;
        int counter=0;
		cin>>couple;
		int b[couple],g[couple];
		for(int j=0;j<couple;j++){
			cin>>b[j];
		}
		for(int j=0;j<couple;j++){
			cin>>g[j];
		}
		for(int k=0;k<couple;k++){
			ans[k]=0;
			if(b[k]==g[couple-k-1] && b[couple-k-1]==g[k]){
				count++;
                ans[k]=1;
			 }
			else if(b[k]==g[k] && b[couple-k-1]==g[couple-k-1]){

				continue;
			}
		else if((b[k]==g[couple-k-1] && b[couple-k-1]!=g[k]) || (b[k]!=g[couple-k-1] && b[couple-k-1]==g[k]))
               {count=0;
                 break;
			   }
			else{
				continue;
			}
		}


        if(couple%2!=0){
			if(ans[0]==0){		
    for(int l=0;l<(couple-3)/2;l++){
// cout<<ans[k];
if(ans[l]==0 && ans[l+1]==1){
    counter++;
}}
    }
	else{counter=1;
		for(int l=1;l<(couple-3)/2;l++){
// cout<<ans[k];
if(ans[l]==0 && ans[l+1]==1 && ans[l-1]==1){
    counter++;
}}
	}}
    else{		
    for(int l=0;l<(couple-2)/2;l++){
// cout<<ans[k];
if(ans[l]==0 && ans[l+1]==1){
    counter++;
    }}}

		if(count==0){
			per[i]=-1;
		}
		else{
			per[i]=counter;
		}
	}	
    for(int i=0;i<test;i++){
		cout<<per[i]<<endl;
	}
    							// Reading input from STDIN
	return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
