#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "headers.h"



void print_list(struct node *first){
  if (first->i != NULL){
    printf("[ %d ", first->i);
  }
  struct node *new = first->next;

  while (new != NULL){
    printf("%d ", new->i);
    new = new->next;
  }

  printf("]\n");
}

struct node * insert_front(struct node *first, int i){
  struct node *newFirst = malloc(sizeof(struct node));
  newFirst->next = first;
  newFirst->i = i;
  return newFirst;
}

struct node * free_list(struct node *first){
  struct node *c = malloc(sizeof(struct node));
  c = first->next;
  while(c->next != NULL){
    c = c->next;
    free(c);
  }
  return free(first);
}
