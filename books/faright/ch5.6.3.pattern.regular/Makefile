all: main.o foo1.o foo2.o foo3.o
	$(CC) -o all $^
%.o: %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<
