#include <time.h>  /* for time() */
#include <stdlib.h>  /* for rand() and srand() */
#include <stdio.h>

int main(int arg, char *argv[] ){
   
   printf("%d \n" , arg);
   if(arg <= 4){
   printf( "say %s %s %s \n", argv[1], argv[2], argv[3]);}
   
   if (arg > 4){
   printf("too many arguements, only taking the first 3 values \n");}
   
   return(0);
}
