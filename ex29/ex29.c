/*Copyright (C) <2013>  <Tyler Morgan>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>*/

#include <stdio.h>
#include "dbg.h"
#include <dlfcn.h>

typedef int (*lib_function)(const char *data);

int main(int argc, char *argv[]){
  int rc =0;
  check(argc == 4, "USAGE: ex29 libex29.so function data");

  char *lib_file = argv[1];
  char *func_to_run = argv[2];
  char *data = argv[3];

  void *lib = dlopen(lib_file, RTLD_NOW);
  check(lib != NULL, "Failed to open the library %s: %s", lib_file, dlerror());

  lib_function func = dlsym(lib, func_to_run);
  check(func != NULL, "Did not find %s function the library %s: %s", func_to_run, lib_file, dlerror());
  
  rc = func(data);
  check(rc == 0, "Function %s return %d for data:%s", func_to_run, rc, data);

  rc = dlclose(lib);
  check(rc == 0, "Failed to close %s", lib_file);

  return 0;

error:
  return 1;
}



