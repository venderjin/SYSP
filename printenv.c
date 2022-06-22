#include <
stdio.h
#include <
stdlib.h
/*
환경 변수를 3 개 프린트한다 .
int
main( int argc , char argv
{
char *
ptr
ptr
= getenv ("
printf
("HOME = %s n", ptr
ptr
= getenv ("
printf
("SHELL = %s n", ptr
ptr
= getenv ("
printf
("PATH = %s n", ptr
exit(0);
}
