SOURCES = \
	Main.c

INCLUDES =

OUTPUT_FILES = $(SOURCES:.c=.out)

all: $(OUTPUT_FILES)

clean:
	$(RM) $(OUTPUT_FILES)

%.out: %.c
	gcc $(INCLUDES) $< -o $@
