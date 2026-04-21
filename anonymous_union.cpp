#include<iostream>
#include<cstring>
using namespace std;
int main(){
  union{
    long l;
    double d;
    char s[4];
  };
  l=100000;
  d=89.87;
  cout<<l<<" ";
  cout<<d<<" ";
  strcpy(s,"hee");
  cout<<s<< " ";
  return 0;
}