ifeq ($(shell uname), Linux)
	cc=g++
endif
ifeq ($(shell uname), Darwin)
	cc=g++-12
endif

BINS=$(subst .cpp,,$(wildcard *.cpp))

$(BINS):
	$(cc) --std=c++20 -DLOCAL -O2 -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

contest:
	cp template.cpp a.cpp
	cp template.cpp b.cpp
	cp template.cpp c.cpp
	cp template.cpp d.cpp
	cp template.cpp e.cpp
	cp template.cpp f.cpp
	cp template.cpp g.cpp
	cp template.cpp h.cpp
	nvim -p a.cpp b.cpp c.cpp d.cpp e.cpp f.cpp g.cpp h.cpp

clean:
	rm -rf $(BINS) a.cpp b.cpp c.cpp d.cpp e.cpp f.cpp g.cpp h.cpp

.SILENT:
.PHONY: $(BINS) clean
