//Tyler Morgan
//Learning C The Hard Way
//ex8.c

#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10,12,13,14,20};
  char name[] = "Tyler";
  char full_name[] = {'T', 'y', 'l', 'e', 'r', ' ', 'M', 'o', 'r', 'g', 'a', 'n', '\0'};
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d the second is %d\n", areas[0], areas[1]);
  printf("The size of a char is: %ld\n", sizeof(char));
  printf("The size of name char[] is: %ld\n", sizeof(name));
  printf("The size of fullname is: %ld\n", sizeof(full_name));
  printf("The number of letters is: %ld\n", sizeof(full_name) / sizeof(char));
  printf("name = \"%s\", full_name = \"%s\" \n", name, full_name);

  return 0;
}

