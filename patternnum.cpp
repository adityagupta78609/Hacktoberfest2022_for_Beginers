#include<iostream>
using namespace std;


int main() {int n;
            cin>>n;
            for(int i=n;i>0;i--){
                for(int j=0;j<=n-i;j++){
                    cout<<char(i+j+64);
                }
                cout<<endl;
            }
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
}
