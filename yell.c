#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  printf("%s\n", argv[1]);
  for(int arg_counter = 0; arg_counter < argc; arg_counter++) {
    printf("%d\n", argc);
    printf("%s\n", argv[arg_counter]);
  }
  return 0;
}
