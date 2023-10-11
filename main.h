#ifndef MAIN_H
#define MAIN_H

char *sh_read_line(void);
char **sh_split_line(char *);
int sh_execute(char **args);
#endif
