#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    //generate the num between 1 to 100
    int randomNumber=(rand()%100)+1;
   
    int no_of_guesses=0;
   
    int guessed;
     
     do{
        printf("Guess the Number:");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Guess Lower Number please!\n");
        }
        else if(guessed<randomNumber){
            printf("Guess Higher Number please!\n");

        }
        else{
            printf("Congrates you are winner!\n");

        }
        no_of_guesses++;
        
     }while (guessed!=randomNumber);
     
     printf("YOU GUESSED THE NUMBER IN %d GUESSES", no_of_guesses);

   return 0;
}