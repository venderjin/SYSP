#
include sys types.h
#
include sys wait.h
#
include stdio.h
#
include stdlib.h
#
include unistd.h
/*
부모 프로세스가 자식 프로세스를 생성하고 끝나기를 기다린다 .
int
main ()
{
int
pid1, pid2, child , status
printf
d ] 부모 프로세스 시작 n ", getpid (
pid1 =
fork
if
(pid1 == 0)
printf
d ] 자식 프로세스 #1 시작 n ", getpid (
sleep
(
printf
d ] 자식 프로세스 #1 종료 n ", getpid (
exit
(
}
pid2 =
fork
if
(pid2 == 0)
printf
d ] 자식 프로세스 #2 시작 n ", getpid (
sleep
(
printf
d ] 자식 프로세스 #2 종료 n ", getpid (
exit
(
}
child
= waitpid (pid1, status , 0); // 자식 프로세스 #1 의 종료를 기다린다
printf
d ] 자식 프로세스 #1 d 종료 n ", getpid (), child
printf
t 종료 코드 d n ", status >>
}
