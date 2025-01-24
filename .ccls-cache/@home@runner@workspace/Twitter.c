#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  char text[2555] = "";  
  char *textp = text;
      
  //Prints a request for user input & store its value
  
  printf("Please input text to check:\n");
  scanf("%s", textp);

  printf("\n\n%zu", strlen(text));


  
  
  
  return 0;

}


/*
  if(strlen(text)>140) {
  printf("\nRejected.\n");
}
  if(strlen(text)<=141) {
  printf("\nPosted.\n");
}
// char *textp = (char*) malloc(strlen(text) +1);

/*Compare the lenght of the input with the predertermined value
if less than 140 print posted, otherwise print rejected*/