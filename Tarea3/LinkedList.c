
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


void insertData(char n){
    struct node *newNode;
    char data = n;
    newNode = (struct node *)malloc(sizeof(struct node)); // create a new node  
    newNode->data = data;   //  we assign the value
    if (first == NULL){
         first = newNode;
         last = first;
         first->next = last;
    }else{
      last->next = newNode;
      newNode->next = first;
      last = newNode;
    }
}

void procesamiento(){
      struct node  *current;
      if(first == NULL){
        printf("List is empty.");
        return;
      }
      current= first;
      do{
         printf("Data = %d\n", current->data); // Print data of current node
         current = current->next;    // Move to next node
      } while(current!=first);
}