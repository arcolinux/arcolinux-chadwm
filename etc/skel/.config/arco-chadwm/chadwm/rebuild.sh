#!/bin/bash
rm config.h
make clean
make
sudo make install

echo
tput setaf 2
echo "################################################################"
echo "Press super + shift + r to reload your new Chadwm build"
echo "################################################################"
tput sgr0
echo