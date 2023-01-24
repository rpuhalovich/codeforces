ifeq ($(shell uname), Linux)
	cc=g++
endif
ifeq ($(shell uname), Darwin)
	cc=g++-12
endif

SRC=$(wildcard *.cpp)
BINS=$(subst .cpp,,$(SRC))

$(BINS):
	$(cc) --std=c++20 -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

clean:
	rm -rf $(BINS)

.SILENT:
.PHONY: $(BINS) clean
