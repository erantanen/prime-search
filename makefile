CC=gcc
CFLAGS=-Wall -I. -pthread
LDFLAGS=-pthread
SOURCES=prime-search.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=prime-search

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)