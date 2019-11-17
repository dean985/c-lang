all: libmyMath.so libmyMath.a mains maind
mains: main.o libmyMath.a
	gcc -Wall -g -o mains main.o libmyMath.a
maind: main.o
	gcc -Wall -g -o maind main.o ./libmyMath.so
mymathd: libmyMath.so
mymaths: libmyMath.a
libmyMath.a: power.o basicMath.o mymath.h
	ar rs libmyMath.a basicMath.o power.o
libmyMath.so: power.o basicMath.o mymath.h
	gcc -shared -o libmyMath.so power.o basicMath.o
main.o: main.c mymath.h
	gcc -Wall -c -g main.c
basicMath.o: basicMath.c mymath.h
	gcc -Wall -c -g basicMath.c
power.o: power.c mymath.h
	gcc -Wall -c -g power.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
