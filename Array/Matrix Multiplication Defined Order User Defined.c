#include<stdio.h>
int main(){
    
    int i, j, k, n, m;
    
    printf("rows1: ");
    scanf("%d", &n);
    printf("columns1: ");
    scanf("%d", &m);
    
    int matrix1[n][m];        //declaring matrix1
    
    printf("enter elements of a matrix1 row wise: ");
    
    for(i=0; i<n; i++){        //scaning the elements of matrix1
        for(j=0; j<m; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    int a, b;
    
    printf("rows2: ");
    scanf("%d", &a);
    printf("columns2: ");
    scanf("%d", &b);
    
    int matrix2[a][b];        //declaring matrix2
    
    printf("enter elements of matrix2 row wise: ");
    
    for(i=0; i<a; i++){        //scaning the elements of matrix2
        for(j=0; j<b; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    if(m == a){        //applying condition based on matrix multiplication property
        
        int matrix3[n][b];        //declaring matrix3
        
        for(i=0; i<n; i++){        //sum of matrix
            for(j=0; j<b; j++){
                
            int sum=0;
                
                for(k=0; k<n; k++){
                    sum += matrix1[i][k]*matrix2[k][j];
                }
                
                matrix3[i][j]=sum;
                
            }
        }
        
        for(i=0; i<n; i++){        //print the sum matrix3
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
