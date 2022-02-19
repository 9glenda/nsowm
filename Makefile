CFLAGS += -std=c99 -Wall -Wextra -pedantic -Wold-style-declaration
CFLAGS += -Wmissing-prototypes -Wno-unused-parameter
PREFIX ?= /usr
BINDIR ?= $(PREFIX)/bin
CC     ?= gcc

all: clean sowm

config.h:
	cp config.def.h config.h
	cp patches.def.h patches.h

sowm: sowm.c sowm.h config.h patches.h Makefile
	$(CC) -O3 $(CFLAGS) -o $@ $< -lX11 -lXext $(LDFLAGS)

install: all
	install -Dm755 sowm $(DESTDIR)$(BINDIR)/sowm

uninstall:
	rm -f $(DESTDIR)$(BINDIR)/sowm

clean:	
	rm -f sowm *.o patches.h config.h

.PHONY: all install uninstall clean
