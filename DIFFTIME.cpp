
#include <stdio.h> 
#include <time.h> 
int main(void) 
{ 
    time_t start, end; 
    int a, b; 
    printf("Enter two no: ");
    scanf("%d %d", &a, &b);
    start = time(NULL); 
    printf("Sum of %d and %d is %d\n", 
           a, b, a + b); 
    end = time(NULL); 
    printf("Time taken to print sum is %.10f seconds", 
           difftime(end, start)); 
} 

