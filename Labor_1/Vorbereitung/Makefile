SOURCES = \
	Main.c

INCLUDES =

OUTPUT_FILES = $(SOURCES:.c=.out)

all: build run

build: $(OUTPUT_FILES)
run: $(OUTPUT_FILES)
	$(abspath $<)

clean:
	$(RM) $(OUTPUT_FILES)

%.out: %.c
	gcc $(INCLUDES) $< -o $@
