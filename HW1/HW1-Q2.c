/* Addition program */
#include <stdio.h>

/* THE ERRORS ARE EXPLAINED WITH COMMENTS */
int main( void )
{
   int integer1; /*"The semicolon is missing."*/
   int integer2;  /*"The semicolon is missing."*/
   int x;      /* An unnecessary variable defining due to never being used in any way. */ 

   printf( "Enter first integer\n" ); /* The quotation mark is missing. */
   scanf( "%d", &integer1 );        

   printf( "Enter second integer\n" ); 
   scanf( "%d", &integer2 );           
   
   int sum = integer1 + integer2; /* The variable type is not specified. */

   printf( "Sum is %d\n", sum ); 
   return 0; 

} /* end function main */

/* THE RUN IS AS FOLLOWS:
Enter first integer
4
Enter second integer
5
Sum is 9 */
