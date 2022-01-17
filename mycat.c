#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  int input_file_descriptor;

  if(argc == 1) {
    char c[2048];
    write(1, &c, read(0, &c, sizeof(c)));
  } else {

    for(int arg_counter = 1; arg_counter < argc; arg_counter++) {
      input_file_descriptor = open(argv[arg_counter], O_RDONLY);
      char buffer;
      int num_bytes_read;
      while( (num_bytes_read = read(input_file_descriptor, &buffer, sizeof(buffer)) ) > 0 ) {
        write(1, &buffer, num_bytes_read);
      }
      close(input_file_descriptor);
    }

  }
  return 0;
}
