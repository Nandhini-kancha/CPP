#include<iostream>
using namespace std;
#define MAX_SIZE 100
void push(int i);
class stack{
int stck[100];
int tos;
public:
stack();
~stack();
void push(int i);
};
stack::stack(){
  tos=0;
  cout<<"constructor initialized values";
}
stack::~stack(){
  cout<<"constructor destroyed";
}

void stack::push(int i){
  if(tos==MAX_SIZE){
    cout<<"stack is full";
    return ;
  }
  stck[tos]=i;
  tos++;
}

int main(){
  stack st1;
  st1.push(7);
}