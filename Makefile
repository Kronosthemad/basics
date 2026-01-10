all:
	gcc -c /home/kronos/Projects/basics/src/main.cpp -o /home/kronos/Projects/basics/obj/main.o
	gcc /home/kronos/Projects/basics/obj/main.o -o /home/kronos/Projects/basics/bin/app

clean:
	rm -f /home/kronos/Projects/basics/obj/main.o
	rm -f /home/kronos/Projects/basics/bin/app

install: all
	cp /home/kronos/Projects/basics/bin/app /home/kronos/bin/app
