#include <stdio.h>
#include <stdlib.h>

//struct declaration

struct node{
  char h;
  struct node *next;
};

//function declarations
void print_list(struct node *);
struct node *insert_front(struct node *, int woo);
struct node * free_list(struct node*);

//functions
void print_list(struct node * pointer){
  printf("character at node: %c\n", (*pointer).h);
}

int main(){
  struct node *yay;
  struct node *next1;
  (*yay).h = '@',
  (*yay).next = next1;
  print_list(yay);
  return 0;
}
