#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Hunerler ( float itemPrice, float* donationTotal , float* profitTotal);

int main(){
    
    float donation=0;
    float profit=0;
    float itemPrice;
    //random codes of previous exercise.
    srand(time(NULL));

    float aRandomNumber ; 
    
    for(int i=0; i<50; i++){
        aRandomNumber = rand()%2000 + 1; //Generates a random number between 20000 and 1.
        aRandomNumber = aRandomNumber/100; //Converts it to a float number between 20 and 0.
        
        itemPrice=aRandomNumber;
        Hunerler(itemPrice, &donation, &profit);
        printf("Item: %.2f\n", itemPrice);
        
    }
    
    printf("Donation: %.2f\n", donation);
    printf("Profit: %.f\n", profit);
    

    return 0;
        
}

void Hunerler( float itemPrice, float* donationTotal, float* profitTotal){
    
    
    float frac= itemPrice - (int)itemPrice;
    *donationTotal = *donationTotal + frac;
    *profitTotal = *profitTotal + (int)itemPrice;
    
    
    
}
