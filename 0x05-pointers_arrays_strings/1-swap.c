 #include "main.h"                                                               

/**                                                                             
 *swap_int - swaps integers                                                     
 *@a - is the first integer                                                     
 *@b - is the second integer                                                    
 *Return: No return value                                                       
 */                                                                             
                                                                                 
 void swap_int(int *a, int *b)                                                   
 {                                                                               
         int temp;                                                               
         temp = *b;                                                              
         *b = *a;                                                                
         *a = temp;                                                              
 } 
