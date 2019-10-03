# See LICENSE file for copyright and license details.
.POSIX:

TARGET=test

IDIR =../hashtable
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = hashtable.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hashtable.o $(TARGET).o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
		rm -f $(ODIR)/*.o
