#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "student.h
/*학생 정보를 입력받아 데이터베이스 파일에 저장한다*/
int main( int argc , char argv[])
{
    int fd;
    struct student record;
    if (argc < 2)
        fprintf(stderr , 사용법 : %s file n", argv [0])
        exit(1);
}
