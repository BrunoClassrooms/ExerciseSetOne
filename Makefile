CFLAGS=-Wall -Werror -O3
TARGETS=addition_test

all : ${TARGETS}

%_test : %.o
	gcc $@.c $<  -o $@

clean:
	rm -f ${TARGETS} *.o *~
