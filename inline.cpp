#include<iostream>
using namespace std;
class c1{
  int a,b;
  public:
  void init(int i,int j);
  void show();
};
inline void c1::init(int i,int j){
 a=i,b=j;
}
inline void c1::show(){
  cout<<a<<" "<<b;
}
int main(){
  c1 c;
  c.init(3,4);
  c.show();
  return 0;
}