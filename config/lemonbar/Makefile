all: ws_visualizer
ws_visualizer:
	go build ws_visualizer.go

install: all
	install ws_visualizer /usr/bin/
	install launchlemon.sh /usr/bin/launchlemon
	install lemonconfig.sh /usr/bin/lemonconfig

clean:
	rm -f ws_visualizer
