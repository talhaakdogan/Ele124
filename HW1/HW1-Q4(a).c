#include <stdio.h>
#include <math.h> /*for the pow function*/


double computeHomeValue(int popularity_house, int size_house);


int main()
{
   int popularity_house;
   int size_house;
   double result;
   
   printf("Enter popularity:");         /*input of popularity*/
   scanf(" %d",&popularity_house);
   printf("Enter size:");              /* input of size*/
   scanf(" %d", &size_house);
   
   result= computeHomeValue(popularity_house, size_house); 
   printf("Home value is: %.0f", result);  /* home value output */
   return 0; 
}


double computeHomeValue(int popularity_house, int size_house)  /*function is being defined*/
{
    return (pow(popularity_house , 3) + pow(size_house , 2)) * 10000;   /* home value output*/
}

/*************************************** 
A SAMPLE OUTPUT IS AS FOLLOWS:

Enter popularity:4
Enter size:2
Home value is: 680000

***************************************/
