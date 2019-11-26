#include <stdio.h>
#include <string.h>
#include <unistd.h>
char ** parse_args( char * line );

int main(){
  char line[100] = "ls -a -l";
  char *s1 = line;
  parse_args(s1);
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
