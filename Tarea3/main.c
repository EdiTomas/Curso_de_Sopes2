#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList.h"
#include "LinkedList.c"

//#ifndef LinkedList_H
//#define LinkedList_H




char entrada[200];
int size=0;
int main(){
       int valorUsuario=0;
       
       printf("***************************************\n");
       printf("*                                     *\n");
       printf("*           WELCOME TO MENU           *\n");
       printf("*                                     *\n");
       printf("***************************************\n");
       
       while (1){  
           printf("     1 ) Enter the size of buffer  .   \n");
           printf("     2 ) Enter a string of character.  \n");
           printf("     3 ) Exit  .                       \n");
           printf("     Choose a option .                 \n");
           printf("        ");
           scanf("%d", &valorUsuario); 
           if(valorUsuario==1){
                 printf("***************************************\n");
                 printf(" Enter a values.                   \n");
                 scanf("%d", &size); 
           
           }else if(valorUsuario==2){
                 printf("***************************************\n");
                 printf("  Enter the character.                   \n");
                 interruption();
                 procesamiento();
           }else if(valorUsuario==3){
                 printf("***************************************\n");
                 printf(" exit successfully  .\n");
                    break;
           }else{
            break;
           }     
            
        };     
   //   PrintLinkedList();

  return 0;   
}


char * cadena=0;
void interruption(){
      scanf("%s", &entrada); 
      for(int i =0 ;i<strlen(entrada);i++){
          if(i<size){
              insertData(entrada[i]); 
          }else{
              printf(" *******the memory is full\n");
              break;
          }
      }
}








  /*
        if(65 <= entrada[i] && entrada[i] <= 90){
            entrada[i] = entrada[i] + 32;
        }
        */

