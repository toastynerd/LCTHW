//Tyler Morgan
//Learning C The Hard Way
//ex12.c

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if(argc == 1){
    printf("You don't enough arguments\n");
  }else if(argc > 1 && argc < 4){
    printf("Here are your arguments: ");

    for(i = 1; i < argc; i++){
      printf("%s ", argv[i]);
    }
    printf("\n");
  }else{
    printf("Arg! Too many arguments\n");
  }

  return 0;
}
