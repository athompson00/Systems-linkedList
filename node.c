#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "headers.h"



void print_list(struct node *first){
  printf("[ ");

  while (first->next != NULL){
    printf("%d ", first->i);
    first = first->next;
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
  if (first->next != NULL){
    first->next = free_list(first->next);
  }
  free(first);
  return first->next;
}

struct node * remove_node(struct node *first, int data){
  if (first->i == data){
    return first->next;
  } else {
    struct node *temp = first;
    struct node *new = first->next;
    bool done = 0;
    while (new != NULL && done == 0){
      if (new-> == data){
        temp-> = new->next;
        done = 1;
      } else {
        temp = new;
        new = new->next;
      }
    }
    return first;
  }
}
