SOURCES = \
	Main.c

INCLUDES = \
	-I.

FLAG_MODE ?= FOR_LOOP
$(info MODE=$(FLAG_MODE))

OUTPUT_FILES = $(SOURCES:.c=.out)

all: build run

build: $(OUTPUT_FILES)
run: $(OUTPUT_FILES)
	$(abspath $<)

clean:
	$(RM) $(OUTPUT_FILES)

%.out: %.c
	gcc $(INCLUDES) -DMODE=$(FLAG_MODE) $< -o $@
