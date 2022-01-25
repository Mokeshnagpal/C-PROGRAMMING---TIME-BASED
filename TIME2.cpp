#include <stdio.h>
#include <time.h>
int main () {
   time_t rawtime;
   struct tm *info;
   time( &rawtime );
   info = localtime( &rawtime );
   printf("\nInfo: %d",info);
   printf("\nlocaltime: %d",localtime(&rawtime));
   printf("\nCurrent local time and date: %s", asctime(info));
   return(0);
}
/*
The C library function struct tm *localtime(const time_t *timer) uses the time pointed by timer to fill a tm structure with 
the values that represent the corresponding local time.
 The value of timer is broken up into the structure tm and expressed in the local time zone.

This function returns a pointer to a tm structure with the time information filled in. Following is the tm structure information -

struct tm {
   int tm_sec;          seconds,  range 0 to 59          
   int tm_min;          minutes, range 0 to 59           
   int tm_hour;         hours, range 0 to 23             
   int tm_mday;         day of the month, range 1 to 31  
   int tm_mon;          month, range 0 to 11             
   int tm_year;         The number of years since 1900   
   int tm_wday;         day of the week, range 0 to 6    
   int tm_yday;         day in the year, range 0 to 365  
   int tm_isdst; 	    daylight saving time 
   };    
   
  The C library function char *asctime(const struct tm *timeptr) returns a pointer to a string 
  which represents the day and time of the structure struct            
*/
