1 #include <sys/
types.h
2 #include <sys/
stat.h
3 #include <
dirent.h
4 #include <
stdio.h
5 #include <
stdlib.h
6
7 /*
디렉터리 내의 파일 이름들을 리스트한다 .
8
int main( int argc , char argv
9 {
10 DIR *
dp
11 char *
dir
12
struct dirent *
13
struct stat st
14 char path[BUFSIZ+1];
15

16 if (
argc ==
17
dir = "."; // 현재 디렉터리를 대상으로
18 else
dir = argv [
19
20 if ((
dp = opendir dir ))) == NULL) // 디렉터리 열기
21
perror dir
22
23 while ((d =
readdir dp ))) != NULL) // 각 디렉터리 엔트리에 대해
24
printf ("%s n", d d_name ); // 파일 이름 프린트
25
26
closedir dp
27 exit(0);
28 }
