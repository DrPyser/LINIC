#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv){

  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");
  puts("let's get this party started");

  while(1){
    /* code executed at each prompt
     */

    //prompt
    char* input = readline("lispy> ");

    add_history(input);
    
    //echo
    printf("You said: %s \n", input);


    free(input);
  }

  return 0;

}

