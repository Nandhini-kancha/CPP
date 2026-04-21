#include<iostream>
using namespace std;

#define SIZE 100
class stack{
  int stck[SIZE];
  int tos;
  public:
  void init();
  void push(int i);
  int pop();
};

void stack:: init(){
  tos=0;
}
void stack::push(int i){
  if(tos==SIZE){
    cout<<"stack is full";
    return ;
  }
  stck[tos]=i;
  tos++;
}
int stack::pop(){
  if(tos==0){
    cout<<"stack underflow";
    return 0;
  }
  tos--;
  return stck[tos];
}

int main(){
  stack st1,st2;
  st1.init();
  st2.init();
  st1.push(3);
  st2.push(7);
  cout<<st1.pop()<<" ";
  cout<<st2.pop()<<" ";
  return 0;
}