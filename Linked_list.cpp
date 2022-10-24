#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;                              // public banaya kyuki isko access karneke liye koi function na lage humko
node (int data){                               // constructor node banane ke liye 
    this -> data = data;                     // data set karne ke liye
    this -> next = NULL;               // initially NULL pointer banana ,atki baad mein dusre node ko point kar sake
}
void print(node * temp){                       // print function
  if(temp != NULL){ 
     cout<<temp -> data<<endl;
    print( temp ->next);
  }
  else if(temp==NULL){
    cout<<"empty LL";
  }
}
};

// int main()
// {
// node *head ;            // head first node ka value store karne ke liye
// node n1(10);
// node n2(20);
// node n3(30);
// node n4(40);
// node n5(50);

// head = &n1;
// n1.next = &n2;
// n2.next = &n3;
// n3.next = &n4;
// n4.next = &n5;
// n1.print(head);

// return 0;
// }