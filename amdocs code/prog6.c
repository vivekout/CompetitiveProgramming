#include <stdio.h>
#include "student.h"


int maxArraySum(int arr[],int size){
    int max_so_far = 0, max_ending_here = 0,i; 
   for ( i = 0; i < size; i++) 
   { 
       max_ending_here = max_ending_here + arr[i]; 
       if (max_ending_here < 0) 
           max_ending_here = 0; 

       else if (max_so_far < max_ending_here) 
           max_so_far = max_ending_here; 
   } 
   return max_so_far; 
}
