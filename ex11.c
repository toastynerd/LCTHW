//Tyler Morgan
//Learn C The Hard Way
//ex11.c

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 1;

  while(i < argc){
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  char *states[] ={
    "Washington", "Oregon",
    "California", "TheRest"
  };

  int num_states = 4;
  i = 0;
  while(i < num_states) {
    printf("%d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}
