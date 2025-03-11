# makefile for sd8
#
sd8: sd8.cpp
	g++ -Wall -g sd8.cpp -o ./Build/DEBUG/sd8

.PHONY: clean
clean:
	rm ./Build/DEBUG/*
