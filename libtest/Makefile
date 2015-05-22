all: libtest.so main
lib:
	gcc -fPIC -g -c test.c -o lib.o
	gcc -g -shared -Wl,-soname,libtest.so -o libtest.so lib.o -lc
#can use -I to include file
#can user -L to get libs
#. means current dir
main:
	gcc -g main.c -L. -ltest -o main

clean:
	rm *.o *.so
