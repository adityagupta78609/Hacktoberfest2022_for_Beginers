#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
class stack{
public:
int length;
int *stack1;
int nextIndex=0;
stack(int length){
    this->length = length;
    stack1 = new int[length];
}
// taking default size of stack as 20 
stack(){
    int *stack1 = new int[20];
}
void push(int data){
if(nextIndex < size){
stack1[nextIndex]=data;
nextIndex++;
}else{
    cout<<"stack overflow";
}
}
void pop(){
    if(nextIndex >0){
    nextIndex--;
    }else{
        cout<<"nothing to pop";
    }
}
int top(){
return stack1[nextIndex-1];
}
int size(){
    return nextIndex;
}
int capacity(){
    return length;
}
};
int main()
{
int size;
cout<<"enter size of Stack : \n";
cin>> size;
stack s1(size);
s1.push(5);
s1.push(6);
s1.push(7);
s1.push(8);
s1.push(9);
s1.push(10);
cout<<s1.top();
return 0;
}