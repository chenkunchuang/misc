#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){

  char* s1= "Hello World";
  char s2[] = "This is good";

  //s1[0] = 'h';
  printf("s1 %s", s1);
  
  s2[0] = 't';
  printf("s2 %s", s2);

  return 0;
}
