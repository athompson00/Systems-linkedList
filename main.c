#include "headers.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main(){
  struct node *test = malloc(sizeof(struct node));

  printf("Printing list test: ");
  print_list(test);

  printf("_________Testing Insertion__________\n");
  int x;
  for (x = 0; x < 10; x++){
    test = insert_front(test, x);
    printf("Inserted %d to front", x);
    print_list(test);
    printf("\n");
  }

  printf("_________Testing Freeing List_________\n");
  free_list(test);
  print_list(test);
}
