#include<stdio.h>
int main(){
  
	int i=1,j=1;    //declare the variables
 char ch = 'a';
  
	while(i<=7){    //initializing while loop
		j=1;
    
		do{    //initializing do while loop
		    j++;
		    printf(" %c", ch);
		    ch++;
      
		    if(ch >'z')    //conditional
		    break;
		   }  
		while(j<=i);
		i++;
        
		printf(" \n");
	}

	return 0;
}
