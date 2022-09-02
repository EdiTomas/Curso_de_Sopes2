#ifndef LinkedList_H
#define LinkedList_H
#include <stdio.h>
#include <stdlib.h>

int Longitud(char * cadena);
void interruption();
void procesamiento();
void insertData(char n);
//void PrintLinkedList();

struct node{
    char data;
    struct node *next;
}* first,* last;

#endif
