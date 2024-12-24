#include<stdio.h>
void main(){
  
char c = 'A';    //declare the variables
  
  for(int i=1; i<=4; i++){    //loop initialization
      for(int j=1; j<=4; j++){
        
          printf("%c ",c);
          c++;
        
      }
      printf("\n");
  }
}
