# wine-calc-project

This is the Microsoft Windows calculator program clone that I wrote for the WINE and ReactOS projects in C and Win32 API.

`winecalc` is a free program that works like the
Microsoft Calculator 5.0 (XP) and that can be run on WINE, or Windows 95
or newer versions of Microsoft operating systems.

![`winecalc` in standard mode](/screenshots/screen4.png)

## License

`winecalc` is licensed under the GNU Foundation LGPL version 2 license,
included in this distribution as license.txt.

A binary executable file `winecalc.exe` is included that can be run on
Intel x86 systems. It can be started from the File Explorer or the 
DOS prompt as a command line program.

![`winecalc` in scientific mode](/screenshots/screen1.png)
![`winecalc` in scientific mode](/screenshots/screen2.png)
![`winecalc` in scientific mode](/screenshots/screen3.png)

## Building winecalc

Building `winecalc` is easy, since it relies only on standard libraries
and the traditional Windows Programming API, which is supported by
the libraries shipped with all versions of Windows since Windows 95.

## Building winecalc with the lcc-win32 C compiler

- install lcc. Requires only 50 MB disk space, including Windows documentation.
  available free for non-commercial use, downloadable at 
  http://www.q-software-solutions.com/
- unzip files in the \ directory. A subdirectory `\winecalc` will be created.
- start lcc and create a new project that points to that directory
- lcc will ask some questions about your project.
  You will need "Windows application", "single-user", "ANSI C" and click on 
  "no application framework".
- add files to project from `files.txt` if necessary to recreate project
- click on "Compiler ... Rebuild all" to rebuild
- click on "Compiler ... Execute `winecalc.exe` Ctrl+F5" to run your build

- or you can build with the included Makefile by populating the
  environment variables, typing `cd \winecalc\lcc` and and typing
  `\lcc\bin\make clean` and `\lcc\bin\make`

## Building winecalc with the Microsoft Visual C++ .net (7.0) C Compiler

- install VC++. Requires about 2 GB disk space for tools and an additional
  2 GB for documentation. available commercially for about USD$120.00
- create a subdirectory called `winecalc`
- cd to the `winecalc` directory
- unzip files in that directory
- populate environment variables by typing `vsvars32.bat` (no quotes) or by
  typing
  "c:\Program Files\Microsoft Visual Studio .NET 2003\Common7\tools\vsvars32.bat"
  (double quotation marks are required)
- type `nmake clean`, then `nmake` to build with the included Makefile
- type ``winecalc`` to run your build

## Portability considerations

If you decide to make changes to `winecalc`, here are some notes.

- lcc and VC++ can coexist because lcc creates its build files in `winecalc\lcc`.

- `winecalc` is targeted for WINE, Windows95 and newer Microsoft operating 
  systems. Not supported are Windows 3.1 or older versions or Win32s.

- a future lcc build will use the qmath extended precision library automatically to
  obtain 64 digits of precision.
  VC++ only supports double floats, so only 18 digits of precision is
  available for display.

- VC++ .net (7.0) does not parse variable definitions after the first
  non-definition (code) statement, so define variables at the top of the
  current block

- for cleaner code, I recommend you compile with both lcc and VC++ since
   sometimes one compiler displays a warning that the other compiler misses.

- reasons why `winecalc` probably won't work on operating systems older than
  Windows 95 are:

  - `SetMenuItemInfo` may not be available
  - `wParam` and `lParam` objects may be different widths or be assigned
    different values than Win32 systems

To download Windows Help components, go here and search for "html help":
http://www.microsoft.com/downloads/search.aspx?displaylang=en

* Microsoft, Intel, Windows 95, Windows 3.1, and Windows XP are trademarks of
  their respective holders.

