all: test1 test2 test3 test4

test1: clean1
	g++ -std=c++11 test1.cpp -o test1
	./test1

test2: clean2
	g++ -std=c++11 test2.cpp -o test2
	./test2

test3: clean3
	g++ -std=c++11 test3.cpp -o test3
	./test3

test4: clean4
	g++ -std=c++11 test4.cpp -o test4
	./test4

clean1:
ifneq ("$(wildcard ./test1)","")
	rm test1
endif
clean2:
ifneq ("$(wildcard ./test2)","")
	rm test2
endif
clean3:
ifneq ("$(wildcard ./test3)","")
	rm test3
endif
clean4:
ifneq ("$(wildcard ./test4)","")
	rm test4
endif

.PHONY: test1 test2 test3 test4 test5