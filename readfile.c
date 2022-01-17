#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  (void)argc;

  int file_descriptor_to_read = open(argv[1], O_RDONLY);
  if(file_descriptor_to_read == -1) {
    perror("Error: file wouldn't open");
  }
  
  char buffer[2048];
  int num_bytes_read = read(file_descriptor_to_read, buffer, sizeof buffer);

  write(1, buffer, num_bytes_read);

  if(close(file_descriptor_to_read) == -1) {
    perror("Error: file wouldn't close");
  }
  return 0;   
}
