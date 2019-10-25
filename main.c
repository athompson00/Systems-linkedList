#include "headers.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main(){
  struct student s0 = creation();

  printf("After first created: \n");
  print(s0);
  printf("After Change\n");
  change(s0, "John", 82);
  print(s0);

  //printf("%d",s0.GPA);

}
