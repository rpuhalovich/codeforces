BINS=4A 71A

$(BINS):
	g++ --std=c++20 -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

.SILENT:
.PHONY: $(BINS)
