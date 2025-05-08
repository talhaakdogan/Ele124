#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    float aRandomNumber ; 
    
    for(int i=0; i<50; i++){
        aRandomNumber = rand()%20000 + 1; //Generates a random number between 20000 and 1.
        aRandomNumber = aRandomNumber/1000; //Converts it to a float number.
        printf("%.2f\n", aRandomNumber);
        
    }



    return 0;
        
}
