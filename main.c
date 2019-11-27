#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
char ** parse_args( char * line );

int main(){
  char line[100] = "ls -a -l";
  char ** args = parse_args(line);
  execvp(args[0], args);
  return 0;
}

char ** parse_args( char * line ){
  char * args[5];
  char * curr = line;
  int x;
  for (x = 0; curr != NULL; x++){
    args[x] = strsep (&curr, " ");
    printf("%s\n", args[x]);
  }
  return args;
}
