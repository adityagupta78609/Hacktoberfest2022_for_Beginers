#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;
node(){
    this -> data = 0;
    this -> next = NULL;
}
node(int data){
    this -> data = data;
    this -> next = NULL;
}
 
 // function to input a node before a node having data 'X'
 void insert_before_x(node* head,int x,node* newnode)     // pointer input le rahe hai ,dynamically allot karna hai isliye
{

if(head -> data == x){
    newnode -> next = head;
    head = newnode;
return ;
}

while(head -> data != x && head != NULL){
    
        if(head -> next -> data == x){
            break;
        }
        head = head -> next;
    
}
newnode -> next = head -> next;
head -> next = newnode ;

}
void print(node * temp){                       // print function
  if(temp != NULL){ 
     cout<<temp -> data<<endl;
    print( temp ->next);
  }
}
};

int main()
{
node *head ;
node *n1 = new node(1);
node *n2 = new node(2);
node *n3 = new node(3);
node *n4 = new node(4);
node *n5 = new node(5);
node n;
head = n1;
n1 -> next = n2;
n2 -> next = n3;
n3 -> next = n5;
n.insert_before_x(head,1,n4);
n.print(head);
return 0;
}