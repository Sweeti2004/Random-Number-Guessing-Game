A GAME PROJECT
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("player1\n");
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;//generate a random number between 1 to 100
    //keep running the loop until the number is guessed
    do{
        printf("guess the number between 1 to 100\n");
       
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("congratulation\n");
         printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    printf("player2\n");
    printf("guess the number between 1 to 100\n");
    int nguess=1;
     do{
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{printf("congratulation\n");
         printf("you guessed it in %d attempts\n",nguess);
        }
        nguess++;
    }while(guess!=number);
    if(nguesses>nguess){
        printf ("player 1 is winner");
    }
    else{
        printf ("player 2 is winner");
    }
    return 0;
    
}
