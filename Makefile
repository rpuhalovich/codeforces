ifeq ($(shell uname), Linux)
	cc=g++
endif
ifeq ($(shell uname), Darwin)
	cc=g++-12
endif

BINS=$(subst .cpp,,$(wildcard *.cpp))
CONTEST_FILES=a.cpp b.cpp c.cpp d.cpp e.cpp f.cpp g.cpp h.cpp

$(BINS):
	$(cc) --std=c++20 -DLOCAL -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

contest:
	for file in $(CONTEST_FILES); do cp template.cpp $$file; done
	nvim -p $(CONTEST_FILES)

clean:
	rm -rf $(BINS) $(CONTEST_FILES)

.SILENT:
.PHONY: $(BINS) clean contest
