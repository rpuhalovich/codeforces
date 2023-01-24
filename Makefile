ifeq ($(shell uname), Linux)
	cc=g++
endif
ifeq ($(shell uname), Darwin)
	cc=g++-12
endif

BINS=$(subst .cpp,,$(wildcard *.cpp))

$(BINS):
	$(cc) --std=c++20 -Wall -O2 -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

clean:
	rm -rf $(BINS)

.SILENT:
.PHONY: $(BINS) clean
