#!/bin/sh

var() {
    ws=$(cat /tmp/barfs/ws)
    wscount=$(cat /tmp/barfs/wscount)
    wslist=$(seq -s ' ' 1 $wscount)
    wslist=$(ws_visualizer " $wslist" $ws)
    if [ $(cat /tmp/barfs/fs) -eq "1" ]; then 
    fs="[F]"
    else
    fs="   "
    fi
    battery="$(cat /sys/class/power_supply/BAT1/capacity)%"
}

while [ 0 -eq 0 ];do
var
echo "$wslist $fs %{r} $battery" 
done
