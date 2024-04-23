CC = gcc
CFLAGS = -Wall
LDFLAGS = -lm

SOURCES = $(wildcard solutions/*.c)
EXECS = $(SOURCES:solutions/%.c=%)

all: $(EXECS)

%: solutions/%.c
	$(CC) $< -o solutions/$@ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(addprefix solutions/,$(EXECS))
