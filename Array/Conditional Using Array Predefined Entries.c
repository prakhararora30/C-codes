#include<stdio.h>
int main(){
    
    int i, j, total, marks[5]={90, 58, 84, 93, 58};
    
    for(i=0; i<5; i++){        //deciding the result
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
    
    total=0;
    
    for(j=0; j<5; j++){        //sum of marks
        total = total + marks[j];
    }
    printf("%d", total);
    return 0;
}
