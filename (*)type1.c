#include<stdio.h>
int main(){
    
    int i, j;    //delcare the variables

    for(i=1; i<=4; i++){    //loop 1
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i=1; i<=3; i++){      //loop 2
        for(j=1; j<=3-i+1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
