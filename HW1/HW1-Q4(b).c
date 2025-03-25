#include <stdio.h>
#include <math.h> /*for the pow function*/


void computeHomeValue(); /*this function computes home value and prints it to the screen*/


int main()
{
    computeHomeValue();
    return 0;
}


void computeHomeValue()  /*function is being defined*/
{
    int size_house;
    int popularity_house;
    printf("Enter popularity:");         /*input of popularity*/
    scanf(" %d",&popularity_house);
    printf("Enter size:");              /* input of size*/
    scanf(" %d", &size_house);
   
   
    double result = (pow(popularity_house , 3) + pow(size_house , 2)) * 10000;
    printf("Home value is: %.0f", result);
 
}

/*************************************** 
A SAMPLE OUTPUT IS AS FOLLOWS:

Enter popularity:8
Enter size:1
Home value is: 5130000

***************************************/
