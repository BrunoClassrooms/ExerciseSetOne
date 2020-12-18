CFLAGS=-Wall -Werror -O3
TARGETS=addition_test get_element_test

all : ${TARGETS}

%_test : %.o
	gcc $@.c $^  -o $@

get_element_test : addition.o

clean:
	rm -f ${TARGETS} *.o *~

test:
	for x in ${TARGETS}; do ./$$x ; done
