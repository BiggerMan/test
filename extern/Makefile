objects = main.o time.o
test : $(objects)
	cc -o test $(objects)
main.o : main.c time.c
	cc -c main.c time.c
test.o : time.c
	cc -c time.c

clean:
	rm -rf *.o test
