#include <stdlib.h>
#include <stdio.h>

//esempio di allocazione dinamica in c 

// void* malloc();

/*qui osserviamo che all'interno dell'invocazione del metodo malloc abbiamo la possibilità di specificare quanti dati vogliamo allocare */

/*altro esempio_*/

// char *p;
// p = (char*)malloc(10:);




// int *px;
// px =(int*)malloc(10*sizeof(int));


int main () {
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return(0);
}