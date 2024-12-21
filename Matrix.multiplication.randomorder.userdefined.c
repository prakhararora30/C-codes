#include<stdio.h>
int main(){
    
    int i, j, k, n, m;        //declare the variables
    
    printf("rows1: ");
    scanf("%d", &n);
    printf("columns1: ");
    scanf("%d", &m);
    
    int matrix1[n][m];        //declare matrix1
    
    printf("enter elements of a matrix1 row wise: ");
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    int a, b;
    
    printf("rows2: ");
    scanf("%d", &a);
    printf("columns2: ");
    scanf("%d", &b);
    
    int matrix2[a][b];        //declare matrix2
    
    printf("enter elements of matrix2 row wise: ");
    
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    if(m == a){        //condition for checking the order of matrix
        
        int matrix3[n][b];        //declare matrix3
        
        for(i=0; i<n; i++){
            for(j=0; j<b; j++){
            int sum=0;
                for(k=0; k<n; k++){
                    sum += matrix1[i][k]*matrix2[k][j];
                }
                matrix3[i][j]=sum;
            }
        }
        
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                printf("%d ", matrix3[i][j]);
            }
            printf("\n");
        }
    }
        
    else{
        printf("matrix multiplication is not possible for the defined order of matrices");
    }
    
    return 0;
}
