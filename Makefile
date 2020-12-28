CFLAGS=-Wall -Werror -O3
TARGETS=addition_test get_element_test reverse_test

all : ${TARGETS}

%_test : %.o
	${CC} ${CFLAGS} $@.c $^ -o $@

get_element_test : addition.o

clean:
	rm -f ${TARGETS} *.o *~

test:
	for x in ${TARGETS}; do ./$$x ; done
