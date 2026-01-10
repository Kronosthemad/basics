all:
	g++ -c /home/kronos/Projects/basics/src/main.cpp -o /home/kronos/Projects/basics/obj/main.o
	g++ /home/kronos/Projects/basics/obj/main.o -o /home/kronos/Projects/basics/bin/app

clean:
	rm -r /home/kronos/Projects/basics/obj/main.o
	rm -r /home/kronos/Projects/basics/bin/app

install: all
	cp /home/kronos/Projects/basics/bin/app /home/kronos/bin/app

uninstall:
	rm -r /home/kronos/bin/app