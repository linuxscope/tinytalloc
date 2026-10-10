static:
	$(CC) -fPIC -c talloc.c -o talloc.o
	$(AR) rcs libtalloc.a talloc.o

shared:
	$(CC) -fPIC -shared talloc.c -o libtalloc.so
