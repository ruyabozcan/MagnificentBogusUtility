#include <stdio.h>
#include <string.h>
int main(void) {
  void toUpper(char *);
  char s1[]="This is an example 1234";
  toUpper(s1);
  printf("s1=%s\n",s1);
  return 0;
}

void toUpper(char *s){
 char *p;
  p=s;
 while(*p!='\0'){
   if(*p>='a' && *p<='z')
      *p=*p-('a'-'A');
   p++;
 }
}