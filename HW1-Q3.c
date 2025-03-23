#include <stdio.h>
#include <math.h> /*for the pow function*/

int main()
{
    int popularity_house;
    int size_house;
    
    printf("Enter popularity:");         /*input of popularity*/
    scanf(" %d",&popularity_house);
    printf("Enter size:");              /* input of size*/
    scanf(" %d", &size_house);
    
    double Home_value = (pow(popularity_house , 3) + pow(size_house , 2)) * 10000;
    
    printf("Home value is: %.0f", Home_value);   /* output of home value */
    
    return 0;

}
/*************************************** 
A SAMPLE OUTPUT IS AS FOLLOWS:

Enter popularity:4
Enter size:5
Home value is: 890000
***************************************/
