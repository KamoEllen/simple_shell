#ifndef SHELL_H
#define SHELL_H
/**
 * Header File - shell.h
 * Authors: Siphephelo Khanyile
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/stat.h>
#include <limits.h>
#define CHANGE_DIR 1
#define EXIT_SHELL 2
#define PERM_DENIED "Permission denied"
#define NOT_FOUND "not found"
int Atoi_(char *s);
void rmvSpaces(char *str);
void RvsString(char *str, int len);
int IntegerToString(int x, char str[]);
void Puts_(char *str);
void _Errors(char *program, char *param, char *message, int Qexe);
void Into_Hsh(char **env, char **argv);
char **parse_command(char *command, char *separator);
void Prompt_(void);
int Exec_(char **param, char **env);
void Print_Environment(char **env);
int built_in(char *command, char **env, int status);
char *Get_Environment(char *var, char **env);
int Get_Path(char **param, char **env);
void Execute_(char *command, char **env);
char *_String_copy(char *dest, char *src);
char *_String_Conc(char *dest, char *src);
char *_String_Dupl(char *str);
char *_String_Char(char *s, char c);
int _String_Comp(char *s1, char *s2);
int wait_(char **argv, char *command, int QExecutes);
int BuiltExit(char *command, int status);
int _String_Length(char *s);
int _strncmp(char *s1, char *s2, int n);
int Putchar_(char c);
#endif
