#include <stdlib.h>
#include <stdio.h>

//struct declaration

struct node{
  int h;
  struct node *next;
};

//function declarations
void print_list(struct node *);
struct node *insert_front(struct node *, int woo);
struct node * free_list(struct node*);

//functions

//prints all data in the list
void print_list(struct node * pointer){  
  while(pointer){
    printf("%d\n", pointer->h);
    pointer = pointer->next;
  }
}

//add node to beginning of list
struct node * insert_front(struct node * pointer, int woo){
  struct node *front= (struct node *)malloc(sizeof(struct node));
  (*front).h = woo;
  (*front).next = pointer;
  return front;
}

//frees all nodes in list
struct node *free_list(struct node* pointer){
  struct node *retpoint = pointer;
  while(pointer){
    struct node *updater = pointer;
    pointer = pointer->next;
    free(updater);
    updater = NULL;
  }
  return pointer;
}


int main(){
  struct node *yay = NULL;
  int i = 0;
  printf("testing insert_front with ints from 0-15:");
  while(i<15){
    yay = insert_front(yay,i);
    i++;
  }
  print_list(yay);
  printf("testing free_list:");
  printf("value returned from free list: %p:\n", free_list(yay));
  printf("value of list after being freed:");
  print_list(yay);
  // print_list(yay);
  return 0;
}
