#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char name[25];
    printf("Enter the Name: ");
    gets("%s", &name);
    i=0;
    for(i=0; name[i]!='\0'; i++){
        puts("%c", name[i]);
    }
    printf("\n");
    return 0;
}
