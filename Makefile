BINS=4A

$(BINS):
	g++ --std=c++20 -o $@ $@.cpp
	./$@
	rm -rf $(BINS)

.SILENT:
.PHONY: $(BINS)
