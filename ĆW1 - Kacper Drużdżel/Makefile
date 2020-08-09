NAMEA = a
NAMEB = b
NAMEC = c
NAMED = d
NAMEE = e
OBJA = $(NAMEA).o
EXECA = $(NAMEA).x
OBJB = $(NAMEB).o
EXECB= $(NAMEB).x
OBJC = $(NAMEC).o
EXECC = $(NAMEC).x
OBJD = $(NAMED).o
EXECD = $(NAMED).x
OBJE = $(NAMEE).o
EXECE = $(NAMEE).x
HEAD = funk
HEADO = $(HEAD).o
HEADX = $(HEAD).x

CFLAGS = -Wall -c
LDFLAGS = -s -lm
CO = gcc

.PHONY: all
all: a.x b.x c.x d.x e.x
HEADO: $(HEAD).c $(HEAD).h
OBJ?: $(NAME?).c $(HEAD).h
EXEC?: $(OBJ?) $(HEADO)

%.o: %.c 
	$(CO) $(CFLAGS) -o $@ $<

%.x: %.o $(HEADO)
	$(CO) $(LDFLAGS) -o $@ $^


.PHONY: clean
clean:                                                     
	rm -f *.o  *~ *.a *.so *.x core core* a.out; rm $(NAME1)
