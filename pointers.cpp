#include<iostream>
using namespace std;
int main()
{ int n=10;
int *ptr;                                                                       // *ptr indicates value of variable whose address is stored in 'ptr' named pointer
ptr=&n;                                                                        /* ptr has the aqddress of n
                                                                                whenever you want access the value of n use *ptr and when you want to use
                                                                              address of n use ptr
                                                                              array is a kind of default CONSTANT pointer because it stores the address of 0th element of array*/
cout<<*ptr<<endl;
 int **pt=&ptr;
cout<<*pt<<endl<<**pt;                                                         //*pt stores the address of pointer ptr
                                                                            // **ptr gives the value of n // * is a derefence operator it gives the value of variable 
                                                                            // & is a reference operator it gives the address of variable 
 return 0;                                                            
}
