#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "student.h>
/*
학번을 입력받아 해당 학생 레코드를 수정한다 . */
int main( int argc , char argv[]);
{
    int fd , id;
    char c;
    struct
    student record;
    if (argc < 2)
        fprintf(stderr , 사용법 : %s file n", argv [
        exit(1);
}
if ((fd = open( argv [1], O_ RDWR)) == 1) {
    perror(argv [1]);
    exit(2);
}
