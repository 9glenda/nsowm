#!/bin/sh

var() {
    ws=$(cat /tmp/barfs/ws)
    wscount=$(cat /tmp/barfs/wscount)
    wslist=$(seq -s ' ' 1 $wscount)
    wslist=$(ws_visualizer " $wslist" $ws)
}

while [ 0 -eq 0 ];do
var
echo -e "$wslist"
done
