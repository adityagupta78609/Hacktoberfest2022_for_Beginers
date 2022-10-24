#include<iostream>
using namespace std;
class node{
public:
int data;
node * next ;

node (){
    this -> data = 0;
    this -> next = NULL;
}

node (int data){
    this -> data = data;
    this -> next = NULL;
    
    }
node * input(){
    int data;
    cin>>data;
    node * head = NULL;
    node * temp;
    while(data != -1){
        node * newNode = new node (data);
        if(head == NULL){
            head = newNode;
            temp = head;
        }
        else{
            temp -> next = newNode;
            temp = temp ->next;
        }
        cin>>data;
    }
    
        return head;
    
}
void print(node * head){
    if(head==NULL){
        cout<<"nothing to print";
    }
    while(head != NULL){
        cout<<head -> data <<endl;
        head = head -> next;
    }
}

};

// int main()
// {
//     node n;
//     cout<<"enter data"<<endl;
// node * head = n.input();
// // node * n1 = new node(1);
// // node * n2 = new node(2);
// // node * n3 = new node(3);
// // node * n4 = new node(4);
// // node * n5 = new node(5);

// // head = n1;
// // n1 -> next = n2;
// // n2 -> next = n3;
// // n3 -> next = n4;
// // n4 -> next = n5;


// n.print (head);

// return 0;
// }