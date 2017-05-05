ssu_lsproc : ssu_lsproc.o ssu_function.o ssu_usage.o ssu_test.o
	gcc -Wall -W ssu_lsproc.o ssu_function.o ssu_usage.o ssu_test.o -o ssu_lsproc

ssu_lsproc.o : ssu_lsproc.c
	gcc -Wall -W -c ssu_lsproc.c

ssu_function.o : ssu_function.c
	gcc -Wall -W -c ssu_function.c

ssu_usage.o : ssu_usage.c
	gcc -Wall -W -c ssu_usage.c

ssu_test.o : ssu_test.c
	gcc -Wall -W -c ssu_test.c
