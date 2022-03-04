CFLAGS += -std=c99 -Wall -Wextra -pedantic -Wold-style-declaration
CFLAGS += -Wmissing-prototypes -Wno-unused-parameter
PREFIX ?= /usr
BINDIR ?= $(PREFIX)/bin
CC     ?= gcc

all: nsowm

config.h:
	cp config.def.h config.h

patches.h:
	cp patches.def.h patches.h

nsowm: nsowm.c nsowm.h config.h patches.h Makefile
	$(CC) -O3 $(CFLAGS) -o $@ $< -lX11 -lXext $(LDFLAGS)

install: all
	install -Dm755 nsowm $(DESTDIR)$(BINDIR)/nsowm

uninstall:
	rm -f $(DESTDIR)$(BINDIR)/nsowm

clean:	
	rm -f nsowm *.o patches.h config.h

desktop:
	cp -f nsowm.desktop /usr/share/xsessions/nsowm.desktop

.PHONY: all install uninstall clean desktop
