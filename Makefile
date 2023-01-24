SRC=$(wildcard *.cpp)
BINS=$(subst .cpp,,$(SRC))

$(BINS):
	g++-12 --std=c++20 -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

clean:
	rm -rf $(BINS)

.SILENT:
.PHONY: $(BINS) clean
