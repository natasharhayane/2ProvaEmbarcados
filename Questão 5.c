#include <stdio.h> 
#include <stdlib.h> 
 
int main(){ 
 int A,B,X; 
  

 A = 0; 
 B = 0; 
 
 printf("Valor Invertido:\n");
 
 X = (!(A || B)); 
 printf("%d OR %d: %d\n",A,B,X); 
  
 A = 0; 
 B = 1; 
 X = (!(A || B)); 
 printf("%d OR %d: %d\n",A,B,X); 
  
 A = 1; 
 B = 0; 
 X = (!(A || B)); 
 printf("%d OR %d: %d\n",A,B,X); 
  
 A = 1; 
 B = 1; 
 X = (!(A || B)); 
 printf("%d OR %d: %d\n",A,B,X); 
 return 0; 
}