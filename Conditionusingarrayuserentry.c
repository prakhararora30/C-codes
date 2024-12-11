#include<stdio.h>
int main(){
    
    int i, j, total=0, marks[5];
    
    printf("enter marks of five subjects:");        //user entries for marks
    for(i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    
    for(i=0; i<5; i++){        //result evaluation
        if(marks[i]>60){
            printf("%d ", marks[i]);
            printf("pass");
            printf("\n");
        }
        else{
            printf("%d ", marks[i]);
            printf("fail");
            printf("\n");
        }
    }
    
    for(j=0; j<5; j++){        //sum of marks
        total = total + marks[j];
    }
    
    printf("%d", total);
    
    return 0;
}
