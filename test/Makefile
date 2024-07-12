CC = gcc
PROGRAM = test
INCDIR = -I../
SRCDIR = ../Device
OBJDIR = ./build

SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS)) $(OBJDIR)/test.o

all: app

app: $(OBJS)
	$(CC) $(OBJS) -o $(PROGRAM)

$(OBJDIR)/test.o: test.c
	@mkdir -p $(OBJDIR)
	$(CC) $(INCDIR) -c test.c -o $(OBJDIR)/test.o

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(INCDIR) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(PROGRAM)

.PHONY: all clean
