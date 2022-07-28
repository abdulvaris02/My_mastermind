#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


int my_mastermind(char *param_1, char *param_2)
{ 
    //count1 => Well placed pieces
    //count2 => Misplaced pieces
    int count1 = 0, count2 = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++){
            if(param_1[i] == param_2[j])
            {
                if(i == j){ count1++; } 

                else{ count2++; }             
            }
        }
    }
    if(count1 == 4 && count2 == 0)
    {
        printf("Congratz! You did it!\n");
        return 2;
    }
    else
    {
        printf("\nWell placed pieces: %d\nMisplaced pieces: %d\n", count1, count2);
        return 1;
    }

}

bool true_occurency(char* param_3){
    int answer = 1;
    for(int i = 0; i < 4; i++)
    { 
      if(isalpha(param_3[i]) || ('0' > param_3[i] || param_3[i] > '7')){answer = 0;}     
    }
    return answer;   
}


bool true_occurency2(char*param_4){
    int count_occ2 = 0;
    for(int i = 0; i < 4; i++){
        for(int j =  0; j < 4; j++){
            if(param_4[i] == param_4[j]){
                count_occ2++;
            }
        }
    }
    if(count_occ2 == 4){return 1;}
    else{return 0; }
}

int main(int argc, char *argv[]){
    char answer_argv[4];
    int attemps = 10;
    char * ans2 = (char*)malloc(1000000 * sizeof(char));
    if((argc == 3) && (strcmp(argv[1], "-c") == 0))
    {  
    for(int i  = 0; i < 4; i++)
        {
         answer_argv[i] = argv[2][i];
        }
    }   
    else if(argc == 1)
        { 
          srand(time(NULL));
          for (int i = 0; i < 4; i++)                                                      
          {                                                                               
          answer_argv[i] = rand() % 8 + '0';                                                          
          }
        }

    else if((argc == 5 ) && (strcmp(argv[1], "-c") == 0) && (strcmp(argv[3], "-t") == 0)){
        for(int i  = 0; i < 4; i++)
        {
         answer_argv[i] = argv[2][i];
        }
        attemps = atoi(argv[4]);

    }
    printf("Will you find the secret code?\n");
    for(int i = 0; i <= attemps; i++){
        int correct;
        printf("---\nRound %d\n>", i);
        do
        {
        correct = 1;   
         scanf("%s", ans2);
         int len = strlen(ans2);

         if((true_occurency(ans2) == 0) || (!true_occurency2(ans2)) || (len != 4)){
             correct = 0;}
         if(correct == 0) {printf("Wrong input!\n>");}
        }while(correct != 1);
        if(my_mastermind(answer_argv, ans2) == 2)
        { return 0;}
    }   
}
