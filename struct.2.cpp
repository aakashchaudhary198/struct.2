#include<stdio.h>
struct myStructure {
  int myNum;
  char myLetter;
}s1;

int main(){

  s1.myNum = 13;
  s1.myLetter = 'B';

  
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
} 
