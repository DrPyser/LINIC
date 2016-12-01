CC=gcc

CFLAGS=-I. -std=c99 -Wall

DEPS=

LIBS = -ledit

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

prompt: prompt.o
	cc $(CFLAGS) $(LIBS) prompt.o -o prompt.exe

clean:
	rm -f prompt.exe prompt.o
