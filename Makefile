#  	the location of data files
LIBDIR	= 	/usr/games/lib/Ularn

#	final location of binary (for 'make install')
BINDIR = 	/usr/games

#	link flags
LDFLAGS= -lncurses -ltermcap

#	the source files
SRC	= action.c bill.c create.c data.c diag.c display.c fortune.c\
	player.c help.c io.c main.c monster.c moreobj.c movem.c object.c\
	regen.c savelev.c scores.c show.c signal.c sphere.c store.c tok.c \
	nap.c tty.c

#	the object files
OBJ	= action.o bill.o create.o data.o diag.o display.o fortune.o\
	player.o help.o io.o main.o monster.o moreobj.o movem.o object.o\
	regen.o savelev.o scores.o show.o signal.o sphere.o store.o tok.o \
	nap.o tty.o

#	header files
HDRS	= header.h itm.h monst.h sphere.h config.h player.h

#	data files
LIBFILES=	Uhelp Umaps Ufortune

all:	Ularn

Ularn: $(OBJS)
	$(CC) -g -o $@ $(OBJS1)  $(SYS_LIBRARIES) $(LDFLAGS)

.c.o:	
	$(CC) -g -c $(CFLAGS) $<

##########################################################################
install: $(PROGRAM) $(LIBFILES)
	if test ! -d $(LIBDIR) ; then mkdir $(LIBDIR) ; fi
	-cp Umaps Ufortune Uhelp $(LIBDIR)
	-chmod 644 $(LIBDIR)/Umaps $(LIBDIR)/Ufortune \
		$(LIBDIR)/Uhelp
	if test ! -d $(BINDIR) ; then mkdir $(BINDIR) ; fi
	-cp $(PROGRAM) $(BINDIR)


install.man: $(PROGRAM).man
	-cp $(PROGRAM).man $(MANDIR)/$(PROGRAM).1



# This came with the auto-generated Makefile,
# and I confess to having no idea what it does.
# -- Blacksilver

lint:
	lint $(SRCS1) $(LINTLIBS)

clean:
	$(RM) -f $(PROGRAM) $(OBJS1) core

tags:	nulldep

nulldep:
	ctags -w $(SRCS1) $(HDRS)
	rm -f TAGS
	ctags -xw $(SRCS1) $(HDRS) > TAGS
##########################################################################

##########################################################################
#      archive the source
##########################################################################
SHAR	= shar -a
SHAR1 	= README monster.c sphere.h
SHAR2	= object.c extern.h Ularnopts
SHAR3	= Configure create.c
SHAR4	= data.c main.c help.c
SHAR5	= store.c io.c
SHAR6	= Umaps scores.c Imakefile
SHAR7	= player.c display.c savelev.c config.h.SH
SHAR8	= movem.c moreobj.c action.c tok.c diag.c tty.c
SHAR9	= bill.c sphere.c header.h show.c Uhelp signal.c Makefile.u
SHAR10	= regen.c player.h itm.h nap.c monst.h MANIFEST Ufortune

ALLSHAR = $(SHAR1) $(SHAR2) $(SHAR3) $(SHAR4) $(SHAR5) \
	$(SHAR6) $(SHAR7) $(SHAR8) $(SHAR9) $(SHAR10)

shar: $(ALLSHAR)
	$(SHAR) -m 1 -n 10 $(SHAR1) > part01
	$(SHAR) -m 2 -n 10 $(SHAR2) > part02
	$(SHAR) -m 3 -n 10 $(SHAR3) > part03
	$(SHAR) -m 4 -n 10 $(SHAR4) > part04
	$(SHAR) -m 5 -n 10 $(SHAR5) > part05
	$(SHAR) -m 6 -n 10 $(SHAR6) > part06
	$(SHAR) -m 7 -n 10 $(SHAR7) > part07
	$(SHAR) -m 8 -n 10 $(SHAR8) > part08
	$(SHAR) -m 9 -n 10 $(SHAR8) > part09
	$(SHAR) -m 10 -n 10 $(SHAR8) > part10

tar: $(ALLSHAR)
	tar cvf Ularn.tar $(ALLSHAR)


##### Okay, I know what this does:
# -B


# DO NOT DELETE
action.o: header.h config.h extern.h
bill.o: header.h config.h 
create.o: header.h config.h itm.h extern.h
data.o: header.h config.h 
diag.o: header.h config.h 
display.o: header.h config.h player.h itm.h monst.h extern.h
fortune.o: header.h config.h extern.h
player.o: header.h config.h itm.h extern.h
help.o: header.h config.h 
io.o: header.h config.h extern.h
main.o: header.h config.h patchlevel.h
monster.o: header.h config.h itm.h player.h monst.h extern.h
moreobj.o: header.h config.h player.h itm.h monst.h extern.h
movem.o: header.h config.h player.h itm.h extern.h
object.o: header.h config.h player.h extern.h
regen.o: header.h config.h extern.h
savelev.o: header.h config.h sphere.h player.h itm.h monst.h extern.h
scores.o: header.h config.h player.h extern.h
show.o: header.h config.h 
signal.o: header.h config.h 
sphere.o: header.h config.h itm.h sphere.h extern.h
store.o: header.h config.h extern.h
tok.o: header.h config.h 
nap.o: header.h config.h 
tty.o: header.h config.h 
