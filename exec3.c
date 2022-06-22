#include <sys/
types.h
#include <sys/
wait.h
#include <
stdio.h
#include <
stdlib.h
#include <
unistd.h
/*
명령줄 인수로 받은 명령을 실행시킨다 .
int
main( int argc , char argv
{
int
child, pid ,
pid
= fork(
if (
pid == 0) { // 자식 프로세스
execvp
argv [1], argv [1
fprintf
stderr , "% 실행 불가 n", argv [
}
else { // 부모 프로세스
child = wait(&status);
printf
("[%d] 자식 프로세스 %d 종료 n", getpid (), pid
printf
t 종료 코드 %d n", status>>8);
}
}
