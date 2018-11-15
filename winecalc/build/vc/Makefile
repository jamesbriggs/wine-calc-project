# Nmake macros for building Windows 32-Bit apps with Microsoft Visual C++ .net 7.0

!include <ntwin32.mak>

all: winecalc.exe

clean:
    del winecalc.exe winecalc.obj dialog.obj stats.obj rsrc.res rsrc.rbj

winecalc.obj: winecalc.c winecalc.h
    $(cc) $(cflags) $(cvars) $(cdebug) winecalc.c

dialog.obj: dialog.c dialog.h
    $(cc) $(cflags) $(cvars) $(cdebug) dialog.c

stats.obj: stats.c stats.h
    $(cc) $(cflags) $(cvars) $(cdebug) stats.c

rsrc.res: winecalc.h En.rc Fr.rc
    $(rc) $(rcvars) -r rsrc.rc

rsrc.rbj: rsrc.res
    cvtres /MACHINE:x86 /OUT:rsrc.rbj rsrc.res

winecalc.exe: winecalc.obj dialog.obj stats.obj rsrc.res rsrc.rbj
    $(link) $(linkdebug) $(guiflags) \
    winecalc.obj dialog.obj stats.obj rsrc.rbj   \
    -out:winecalc.exe \
    $(guilibs) comctl32.lib
