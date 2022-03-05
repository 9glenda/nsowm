#!/bin/sh
# usage:
# make-config.sh lemonbar clean install
cd config/$1 
pwd
make ${*:2}
