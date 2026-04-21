#include<iostream>
using namespace std;
class c{
  int a,b;
  public:
  void init(int i,int j){a=i,b=j;}
  void show(){ cout<<a<<" "<<b; }
};
int main(){
  c x;
  x.init(9,7);
  x.show();
  return 0;
}