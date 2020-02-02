#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
   int x,y,d,z,e;
   scanf("%d %d %d",&x,&y,&d);
   printf("x: %d, y: %d, d: %d \n",x,y,d);
   z = pow(x,2) + pow(y,2);
   e = rand();
   printf("z: %d e: %d \n",z,e);
   
}

