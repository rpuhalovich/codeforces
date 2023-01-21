SRC=$(wildcard *.cpp)
BINS=$(subst .cpp,,$(SRC))

$(BINS):
	g++ --std=c++20 -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

.SILENT:
.PHONY: $(BINS)
