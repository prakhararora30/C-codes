#include<stdio.h>
int main(){
    
    int i,j;        //declare the variables

    for(i=1; i<=5; i++){        //row initialization

        for(j=1; j<=5; j++){        //column declaration
            
          if(j == 1 || i == 1 || i == 5 || j == 5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
