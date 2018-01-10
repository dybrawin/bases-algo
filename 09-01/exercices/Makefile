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

all: test-scheduler

	
$(build_dir)/scheduler.o: $(src_dir)/scheduler.cc $(include_dir)/scheduler.h $(build_dir)/machine.o
	$(CC) $(CFLAGS) -o $@ -I $(include_dir) $<

$(build_dir)/machine.o: $(src_dir)/machine.cc $(include_dir)/machine.h $(include_dir)/task.h
	$(CC) $(CFLAGS) -o $@ -I $(include_dir) $<

test-scheduler: $(build_dir)/machine.o $(build_dir)/scheduler.o $(build_dir)/test-scheduler.o
	$(CC) -I $(include_dir) -o $(bin_dir)/$@ $^ $(LDFLAGS)

$(build_dir)/test-scheduler.o: $(test_dir)/test-scheduler.cc
	$(CC) $(CFLAGS) -o $@ -I $(include_dir) $^

clean:
	@rm -f ./build/* ./bin/*
