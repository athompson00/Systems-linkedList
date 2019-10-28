#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"



void print_list(struct node *first){
  printf("[ %d ", first->i);
  struct node *new = first->next;

  while (new != NULL){
    printf("%d ", new->i);
    new = new->next;
  }

  printf("]\n");
}

struct node * insert_front(struct node *first, int i){
  struct node *newFirst = malloc(sizeOf(struct node));
  newFirst->next = first;
  newFirst->i = i;
  return newFirst;
}

struct
