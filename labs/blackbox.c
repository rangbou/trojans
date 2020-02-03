#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int arg, char *argv[]){
   if(arg > 1){
   
   //incase there are too many arguements 
   if(arg > 4){
   printf("Too many arguements, only taking the first 3 values \n");
   }
   
   //initialize values
   float x,y,d,z,e,zd;
   float limit;
   x = atof(argv[1]);
   y = atof(argv[2]);
   d = atof(argv[3]);
   
   //create z = f(x,y)
   printf("x: %f, y: %f, d: %f \n",x,y,d);
   z = pow(x,2) + pow(y,2);
   
   //get a random number e between 0 and z*d
   limit = z*d;
   srand(time(NULL)); //so that new e can be generated every iteration
   e = ((float)rand()/(float)(RAND_MAX)) * limit;
   printf("z: %f e: %f \n",z,e);
   
   //get zd = f(x,y,d)
   zd = z + e;
   printf("zd: %f \n" , zd); 
   }
}

