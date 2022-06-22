#include <stdio.h
#include <fcntl.h
int
main( int argc , char argv )
static
struct flock lock;
int
fd , ret,
if (
argc < 2)
fprintf
stderr , 사용법 : %s 파일 n", argv [0]);
exit(1);
}
fd
= argv [1], O_
if(
fd == 1) {
printf
파일 열기 실패 n");
exit(1);
}
lock.l_type
= F_
lock.l_start
=
lock.l_whence
= SEEK_
lock.l_len
=
lock.l_pid
= getpid
ret =
fcntl fd , F_SETLKW, &
if(ret == 0) { //
파일 잠금 성공하면
c =
getchar
}
}
