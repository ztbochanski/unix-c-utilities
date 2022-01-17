#include <stdio.h>    
int main(int argc, char* argv[]) {
  for(int arg_counter = 0; arg_counter < argc; arg_counter++) {
    printf("%d: %s\n", arg_counter, argv[arg_counter]);
  }

  return 0;   
}
