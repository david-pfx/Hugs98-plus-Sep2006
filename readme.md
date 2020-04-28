# HUGS for WINDOWS

This is a download of Hugs from <https://www.haskell.org/hugs/downloads/2006-09/hugs98-plus-Sep2006.tar.gz>. 
The intent is to produce usable builds of all the Windows programs.

The steps so far are:
* Downloaded and unzipped into `<rootdir>`. Check in.
* Loaded all the SLN files into Visual Studio 2019 and converted
* Build all SLN files, with minimal changes to achieve a successful build. Check in.
* Check that all Hugs programs run, but are not usable until a prelude is created.
* Install MinGW, start command shell, cd `<rootdir>`.
* Run `make` in `<rootdir>`.
* Wait. Fails after about 20 mins.
* Fix INLINE and PBYTE bugs (see repo). Check in.
* Run `make clean` and `make` in `<rootdir>`.
* Wait. Succeeds after around 2 hours (skips some)
* Check in. Delete generated `config.h` and `options.h`.
* Open MSVC x4 and rebuild SLN files (nothing changed really)
* In WinHugs set env `HUGSDIR=<rootdir>\hugsdir`
* Run.
* Fixed all warnings. Checked all builds.
* Check in and push.

