#include<iostream>
// #include "Linked_list.cpp"
#include "input_linked_list.cpp"
//#include<bits/stdc++.h>
using namespace std;
// global variable declare karna pada 
// warna hamesha delete karte samay first node reh jata
// kyuki function mein head ka copy jara tha 
node * head ;
void deleteLL(node* temp){
    static int count=0;
   count++;
    if(temp->next ==NULL){
        return;
    }
    deleteLL(temp->next);
    count--;
    if(temp->next==NULL){
        temp=NULL;
        return;
    }
   node * temp2 =temp->next;
   temp->next=NULL;
    delete temp2;


    if(count == 1){
         node * temp1 = temp;
         head=NULL;
         delete temp1;
         return;
    }
    
}
int main()
{

 node n;
cout<<"enter data"<<endl;
head= n.input();

n.print (head);
deleteLL(head);
n.print(head);

return 0;
}