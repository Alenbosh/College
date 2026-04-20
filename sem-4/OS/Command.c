#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char Command[50];
  while (1) {
    printf("\n Enter command:");
    scanf("%s", Command);
    if (strcmp(Command, "exit") == 0) {
      break;
    }
    system(Command);
  }
  return 0;
}
