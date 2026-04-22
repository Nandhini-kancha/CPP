#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void stradd(char *s1,const char *s2);
void stradd(char *s1,int i);
int main(){
   char str[100];
   strcpy(str,"hello");
   stradd(str,"world");
   cout<< str <<"\n";
   stradd(str,89);
   cout<< str <<"\n";
   return 0;
  }
void stradd(char *s1,const char *s2){
  strcat(s1,s2);
}
void stradd(char *s1,int i){
  char temp[80];
  sprintf(temp,"%d",i); //writes formatted output into string i=89==>"89"
  strcat(s1,temp);
}