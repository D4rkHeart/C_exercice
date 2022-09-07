#include <stdio.h>   
// Compile the program
// gcc -Wall kata-flèche.c -o execKata.out 
int size = 0 ;

int main(){ 
      int newSize = 0;
    do{
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d",&size);
    printf("Your number is: %d \n",size);
    newSize = size*size;
    printf("Your new number is: %d \n",newSize);
    
    // Displays the string inside quotations
    if (size < 1 || size > 20)
        printf("Please enter a number between 1 and 20\n");
    } while(size < 1 || size > 20);
    
    return 0;
}
