#include<iostream>
using namespace std;
class myclass{
  public:
  int who;
  myclass(int i);
  ~myclass();
}ob1(1),ob2(2);

myclass::myclass(int i){
  cout<<"initializing"<<i<<"\n";
  who =i;
}
myclass::~myclass(){
  cout<<"destroying"<<who<<"\n";
}
int main(){
  myclass a(3);
  cout<<"this will be the first line displayed \n";
  myclass b(4);
  return 0;
}