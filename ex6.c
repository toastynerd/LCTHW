//Tyler Morgan
//Lear C the Hard Way
//ex6.c
//

#include <stdio.h>

int main(int arc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 57689.4532;
  char initial = 'H';
  char first_name[] = "Tyler";
  char last_name[] = "Morgan";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n",power);
  printf("You have %f awesome powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("My first name is %s.\n", first_name);
  printf("My last name is %s.\n", last_name);
  printf("My fullname is %s %c %s\n", first_name, initial, last_name);

  return 0;
}

