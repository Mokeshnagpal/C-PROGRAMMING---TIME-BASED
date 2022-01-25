#include <time.h>
#include <stdio.h>

int main () {
   clock_t start_t, end_t, total_t, total_t1;
   int i;

   start_t = clock();
   printf("Starting of the program, start_t = %ld\n", start_t);
    
   printf("Going to scan a big loop, start_t = %ld\n", start_t);
   for(i=0; i< 900000000; i++) 
   {
   }
   end_t = clock();
   printf("End of the big loop, end_t = %ld\n", end_t);
   total_t1=end_t - start_t;
   total_t = ((double)total_t1)/ CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f\n", total_t  );
   printf("Exiting of the program...\n");

   return(0);
}
/*
The C library function clock_t clock(void) returns the number of clock ticks elapsed since the program was launched. 

To get the number of seconds used by the CPU, you will need to divide by CLOCKS_PER_SEC.

On a 32 bit system where CLOCKS_PER_SEC equals 1000000 this function will return the same value approximately every 72 minutes.*/
