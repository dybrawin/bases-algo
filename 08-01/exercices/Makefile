STAMP := touch
CC := g++
CFLAGS := -c -Wall -std=c++11
LDFLAGS :=
TARGET := main
include_dir := include
src_dir := src
bin_dir := bin
build_dir := build
test_dir := test

default: all

###########################################
# All
###########################################
all: test-ex-1-a test-ex-1-b test-ex-2

test-ex-1-a: $(build_dir)/ex-1-a.o $(build_dir)/test-ex-1-a.o
	$(CC) -I $(include_dir) -o $(bin_dir)/$@ $^ $(LDFLAGS)
	
$(build_dir)/ex-1-a.o: $(src_dir)/ex-1-a.cc $(include_dir)/ex-1-a.h
	$(CC) $(CFLAGS) -o $@ -I $(include_dir) $<

$(build_dir)/test-ex-1-a.o: $(test_dir)/test-ex-1-a.cc
	$(CC) $(CFLAGS) -o $@ -I $(include_dir) $^

test-ex-1-b: $(build_dir)/ex-1-b.o $(build_dir)/test-ex-1-b.o
	$(CC) -I $(include_dir) -o $(bin_dir)/$@ $^ $(LDFLAGS)
	
$(build_dir)/ex-1-b.o: $(src_dir)/ex-1-b.cc $(include_dir)/ex-1-b.h
	$(CC) $(CFLAGS) -o $@ -I $(include_dir) $<

$(build_dir)/test-ex-1-b.o: $(test_dir)/test-ex-1-b.cc
	$(CC) $(CFLAGS) -o $@ -I $(include_dir) $^

clean:
	@rm -f ./build/* ./bin/*
