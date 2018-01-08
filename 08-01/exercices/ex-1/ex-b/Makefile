STAMP := touch
CC := g++
CFLAGS := -c -Wall -std=c++11
LDFLAGS :=
TARGET := main
include_dir := include
src_dir := src
bin_dir := bin
build_dir := build

default: main

###########################################
# Package core
###########################################
main: $(build_dir)/main.o
	$(CC) -I $(include_dir) -o $(bin_dir)/$@ $(build_dir)/main.o $(LDFLAGS)
	
$(build_dir)/main.o:  $(src_dir)/main.cc
	$(CC) $(CFLAGS) -o $@ -I $(include_dir)/core $<

clean:
	@rm -f ./build/* ./bin/*
