CC=g++

lib: costdint.o costiostream.o
	ar rvs ./lib/libgc.a ./obj/costdint.o ./obj/costiostream.o

broken: costdint.o newcostiostream.o
	ar rvs ./lib/libgc.a ./obj/costdint.o ./obj/newcostiostream.o

costdint.o:
	$(CC) -fpermissive -o ./obj/costdint.o -I./include/ -c ./src/costdint.cc

costiostream.o:
	$(CC) -fpermissive -o ./obj/costiostream.o -I./include/compile_only/ -c ./src/costiostream.cc

newcostiostream.o:
	$(CC) -fpermissive -o ./obj/newcostiostream.o -I./include/compile_only/ -c ./src/newcostiostream.cc
