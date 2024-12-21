#include<stdio.h>
int main(){
    
    int i, j, n, m;        //declare the variables
    
    printf("enter the number of rows: ");
    scanf("%d", &n);
    printf("enter the number of columns: ");
    scanf("%d", &m);
    
    int matrix[n][m];        //declare matrix1
    
    printf("enter elements of matrix row wise: ");
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        scanf("%d", &matrix[i][j]);        //scan the elements entered
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", matrix[i][j]);        //print the matrix
        }
        printf("\n");
    }
    
    return 0;
}
