#include<stdio.h>
int main(){
    
    int i,j;        //declare the variables

    for(i=1; i<=5; i++){        //row initialization

        for(j=1; j<=5; j++){        //column declaration
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
