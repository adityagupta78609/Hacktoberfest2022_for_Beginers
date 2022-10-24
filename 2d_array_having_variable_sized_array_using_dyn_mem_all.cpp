#include <iostream>
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <algorithm>
using namespace std;


int main() {
    int n,q,i,j,k;
    cout<<"enter size and queries"<<endl;
    cin>>n>>q;                                 
    
    int **ptr = new int*[n];                  // creates a pointer to array of ointers of size n
    for(int a=0;a<n;a++){                     // loop for accesing pointers of the array
        cin>>k;                          //storing the size of new array in variable k  
        ptr[a] = new int[k];             // declaring a array of size k and pointer ptr[a] points to it
        for(int b=0;b<(k);b++){            // loop for accesing the indices of new array of variables
            cin>>ptr[a][b];               // storing values in array
        }
    }
    for(int c=0;c<q;c++){                   // loop for queries
        cout<<"enter position"<<endl;
        cin>>i>>j;                               // taking input for position
        cout<<ptr[i][j]<<endl;                        // output 
    }
     for(int a=0;a<n;a++){
            
    delete []ptr[a];
        }
    delete []ptr;

    return 0;
}