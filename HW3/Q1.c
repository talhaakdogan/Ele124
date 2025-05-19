#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_signal(int signal[], int size);
void clean_signal(int signal[], int size);
int find_max(int signal[], int size);
int find_min(int signal[], int size);
float find_average(int signal[], int size);

int main(){
    int signal[100];
    int size= sizeof(signal)/sizeof(signal[0]);


    generate_signal(signal, size);
    printf("Original Signal: ");
    for(int i=0; i<size; i++){
        printf("%d ",signal[i]);
    }

    clean_signal(signal, size);
    printf("\nCleaned Signal: ");
    for(int i=0; i<size; i++){
        printf("%d ",signal[i]);
    }

    printf("\nStatistical Analyze of the Signal: ");
    printf("\nMax: %d\nMin: %d\nAverage: %.2f",
           find_max(signal, size),
           find_min(signal, size),
           find_average(signal, size));


    return 0;

}
void generate_signal(int signal[], int size){
    srand(time(NULL));
    int i;
    int countcorrupted = size/10; //how many -1 are there?
    int random[countcorrupted];//random places of corruption
    for(int i=0; i<size; i++){//fills the signal without corruption.
        signal[i]= rand()%(size+1);
    }

    //inserts -1 at 10 random place
    for(i=0; i<countcorrupted; i++){
        random[i]= (rand()%(size-2)) + 1;//inserts -1 at places between signal[1] and [98].
        int itemp=i;
        for(int j=0; j<i; j++){ //if rand() generates same numbers for places, it repeats until generates 10 different places.
            if(random[i]==random[j]){
                i--;
                break;
            }
        }
        if(itemp == i + 1){
            continue;
        }
        signal[random[i]]= -1;

    }
    //end
}
void clean_signal(int signal[], int size){
    int valid1, valid2;
    for(int i=0; i<size; i++){
        if(signal[i]== -1){
            for(int j=1; j<10 && (i-j)>=0 ; j++){//nearest valid value before -1.
                if(signal[i-j]!= -1){
                    valid1= i-j;
                    break;
                }
            }
            for(int j=1; j<10 && (i+j)<size ; j++){//nearest valid value after -1.
                if(signal[i+j]!= -1){
                    valid2= i+j;
                    break;
                }
            }
            signal[i]=(signal[valid1] + signal[valid2])/2;
        }
    }

}
int find_max(int signal[], int size){
    int max=signal[0];
    for(int i=1; i<size; i++){
        if(max<signal[i])
            max=signal[i];
    }
    return max;

}
int find_min(int signal[], int size){
    int min=signal[0];
    for(int i=1; i<size; i++){
        if(min>signal[i])
            min=signal[i];
    }
    return min;
}
float find_average(int signal[], int size){
    float average, total=0.0f;
    for(int i=0; i<size; i++){
        total= total + signal[i];
    }
    average = total/size;
    return average;
}
