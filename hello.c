#include <stdio.h>    
int main() {
  int x = 12;
  float y = 3.14;
  char s[15] = "Hello, world!\n";

  printf("x is %d, ", x );
  printf("y is %.2f\n", y );
  printf("%s\n", s );

  for (int i = 0; i < 5; i++) {
    int product = i * 5;
    printf("%d x 5 = ", i);
    printf("%d\n", product);
  }
  return 0;   
}
