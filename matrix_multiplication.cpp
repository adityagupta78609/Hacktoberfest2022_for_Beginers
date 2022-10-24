#include<iostream>
using namespace std;
int main()
{int n,m,p,j,i,k,l,a,b=0;
cout<<"enter rows and columns of 1st matrix"<<endl;
cin>>n>>m;                                                  // taking input of number of rows and columns
int arr[n][m];                                               // declaration of 2D-array for matrix 1 
for(i=0;i<n;i++)                                              //loop for row
{for(j=0;j<m;j++)                                              //loop for column
{ cin>>arr[i][j];}                                             // taking input for arr(i,j) position of matrix
}                                                           
cout<<"enter column of 2nd matrix "<<endl;                      // taking input of number of columns of matrix 2
cin>>p;                                                         
int ac[m][p];                                                     // declaration of 2D- array for matrix 2
for(k=0;k<m;k++)                                                   //loop for row
{for(l=0;l<p;l++)                                              //loop for column
{ cin>>ac[k][l];}                                            // taking input for arr(k,l) position of matrix
}
for(i=0;i<n;i++)                                             //loop for row of resultant matrix
{
    for(j=0;j<p;j++)                                          //loop for column of resultant matrix
    {
        for(k=0;k<m;k++)                                      //loop for repetitive multiplication and addition
        {a=arr[i][k]*ac[k][j];      
        b=b+a;}                                                // storing result of repititive multiplication and addition in variable b
        cout<<b<<"\t";                                          //printing value of b at position (i,j) of resultant matrix
        b=0;
    }
    cout<<endl;                                                  //end lie for moving to next row
}
return 0;}

