#include <time.h>
#include <stdio.h>  
#include <stdlib.h>

main()
{
    time_t cur_time;
    char* t;
    cur_time = time(NULL);
     t = ctime(&cur_time); 
    /*if (cur_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to get the current time.\n");
        exit(EXIT_FAILURE);
    }
    cur_t_string = ctime(&cur_time); //ctime is converting to local time format
    if (cur_t_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }*/
    printf("\n The Current time is : %s \n", t);
    exit(EXIT_SUCCESS);
}

