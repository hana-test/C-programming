#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void add_at_end(struct node *head, int data) {
  struct node *ptr, *temp;

  // Allocate memory for the new node
  temp = (struct node *)malloc(sizeof(struct node));
  if (!temp) {
    printf("Error: Memory allocation failed.\n");
    return;
  }

  temp->data = data;
  temp->link = NULL;

  // Check if head is NULL
  if (!head) {
    head = temp;
  } else {
    // Traverse the list to find the last node
    ptr = head;
    while (ptr->link) {
      ptr = ptr->link;
    }
    // Add the new node to the end
    ptr->link = temp;
  }
}

struct node *add_at_beginning(struct node *head, int data) {
  struct node *ptr;

  // Allocate memory for the new node
  ptr = (struct node *)malloc(sizeof(struct node));
  if (!ptr) {
    printf("Error: Memory allocation failed.\n");
    return NULL;
  }

  ptr->data = data;
  ptr->link = head;

  // New node becomes the head
  head = ptr;

  return head;
}

int main() {
  struct node *head = NULL;

  // Add data to the list
  head = add_at_beginning(head, 45);
  head = add_at_beginning(head, 98);
  head = add_at_beginning(head, 3);
  add_at_end(head, 70);

  // Traverse and print the list
  struct node *current = head;
  while (current) {
    printf("%d\n", current->data);
    current = current->link;
  }

  return 0;
}