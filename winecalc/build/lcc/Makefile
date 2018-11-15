# Wedit Makefile for project winecalc
SRCDIR=\winecalc
CFLAGS=-Ic:\lcc\include  -x  -g3  -ansic
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	dialog.obj \
	en.res \
	stats.obj \
	winecalc.obj \

LIBS=
EXE=winecalc.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem windows -o $(SRCDIR)\lcc\winecalc.exe $(OBJS) $(LIBS)

# Build dialog.c
DIALOG_C=\
	$(SRCDIR)\dialog.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

dialog.obj: $(DIALOG_C) $(SRCDIR)\dialog.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\dialog.c

# Build en.res
EN_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

en.res:	$(EN_RC) $(SRCDIR)\en.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\en.rc

# Build es.res
ES_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

es.res:	$(ES_RC) $(SRCDIR)\es.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\es.rc

# Build fr.res
FR_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

fr.res:	$(FR_RC) $(SRCDIR)\fr.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\fr.rc

# Build it.res
IT_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

it.res:	$(IT_RC) $(SRCDIR)\it.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\it.rc

# Build nl.res
NL_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

nl.res:	$(NL_RC) $(SRCDIR)\nl.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\nl.rc

# Build pt.res
PT_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

pt.res:	$(PT_RC) $(SRCDIR)\pt.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\pt.rc

# Build rsrc.res
RSRC_RC=\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\En.rc\
	$(SRCDIR)\Es.rc\
	$(SRCDIR)\Fr.rc\
	$(SRCDIR)\It.rc\
	$(SRCDIR)\Nl.rc\
	$(SRCDIR)\Pt.rc\
	$(SRCDIR)\Ru.rc\
	$(SRCDIR)\Si.rc\

rsrc.res:	$(RSRC_RC) $(SRCDIR)\rsrc.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\rsrc.rc

# Build ru.res
RU_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

ru.res:	$(RU_RC) $(SRCDIR)\ru.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\ru.rc

# Build si.res
SI_RC=\
	c:\lcc\include\windows.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

si.res:	$(SI_RC) $(SRCDIR)\si.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -Ic:\lcc\include  $(SRCDIR)\si.rc

# Build stats.c
STATS_C=\
	$(SRCDIR)\stats.h\
	$(SRCDIR)\resource.h\
	$(SRCDIR)\winecalc.h\

stats.obj: $(STATS_C) $(SRCDIR)\stats.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\stats.c

# Build winecalc.c
WINECALC_C=\
	$(SRCDIR)\winecalc.h\
	$(SRCDIR)\dialog.h\
	$(SRCDIR)\stats.h\
	$(SRCDIR)\resource.h\

winecalc.obj: $(WINECALC_C) $(SRCDIR)\winecalc.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\winecalc.c

link:
	$(LINKER)  -subsystem windows -o $(SRCDIR)\lcc\winecalc.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) \winecalc\lcc\winecalc.exe
