//Tyler Morgan
//Learning C The Hard Way
//ex9.c

#include <stdio.h>

int main(int argc, char *argv[])
{
  int number[4] = {0};
  char name[4] = {'a'};

  //first print them raw
  printf("numbers: %d %d %d %d\n", number[0], number[1], number[2], number[3]);
  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  printf("Name: %s\n", name);

  number[0] = 1;
  number[1] = 2;
  number[2] = 3;
  number[3] = 4;

  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  printf("numbers: %d %d %d %d\n", number[0], number[1], number[2], number[3]);
  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  printf("Name: %s\n", name);

  char *another = "Zed";

  printf("another: %s\n", another);
  printf("another each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  return 0;
}
