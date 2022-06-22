#include <
stdio.h
#include <
stdlib.h
int
main( int argc , char argv
{
FILE *
fp
if (!
strcmp argv [1], stdin "))
fp
= stdin
printf
한 글자 입력
if (
getchar () == EOF) perror getchar
}
else if (!
strcmp argv [1], stdout
fp
= stdout
else if (!
strcmp argv [1], stderr
fp
= stderr
else if ((
fp = fopen argv [1], "r")) == NULL)
perror
fopen
exit(1);
}
else if (
getc fp ) == EOF) perror getc
printf
스트림 = %s, ", argv [
if (
fp -->_flags & _IO_
printf
버퍼 미사용
else if (
fp -->_flags & _IO_LINE_
printf
줄 버퍼 사용
else
printf
완전 버퍼 사용
printf
(", 버퍼 크기 = %d n", fp IO_buf_end fp IO_buf_base
exit(0);
}
