#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char text[3000] = "";  
  
  //Prints a request for user input & store its value
  printf("Please input text to check:\n");
  fgets (text, 3000, stdin); 

//Compare the lenght of the input with the predertermined value /account for the null character /if less than 140 print posted, otherwise print rejected*/
  
  if(strlen(text)>141) {
    printf("\nRejected.\n");
  }
    else {
    printf("\nPosted.\n");
  }
  return 0;
}