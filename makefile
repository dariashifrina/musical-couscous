all: nodes.c
	gcc -o nodes nodes.c

clean:
	rm *.o

run: all
	./nodes


