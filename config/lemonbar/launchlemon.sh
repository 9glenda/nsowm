#!/bin/sh
killall lemonbar
lemonconfig | lemonbar -p -d | sh &