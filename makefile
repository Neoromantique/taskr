CFLAGS=-Wall -O0 -g
CC=gcc

default: taskr

clean:
	rm -f taskr
clean_all_executables:
	find . -perm +100 -type f -delete


