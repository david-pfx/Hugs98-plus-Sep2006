# HUGS for WINDOWS

This is a download of Hugs from <https://www.haskell.org/hugs/downloads/2006-09/hugs98-plus-Sep2006.tar.gz>. 
The intent is to produce usable builds of all the Windows programs.

## How to build HUGS for Windows
* Clone this repo into `<rootdir>`. 
* Build some SLN files if you like, but they will not run yet without a prelude.
* Install MinGW at default location. The bison build for `parser.y` depends on this.
* Start MSYS command shell, cd `<rootdir>`.
* Run `make` in `<rootdir>`.
* Wait. Succeeds after around 2 hours (skips some)
* At this point it may be worth a check-in on a branch.
* Delete generated `src\config.h` and `src\options.h` (or just rename/move them if you're paranoid)
* Open MSVC x4 and build SLN files.
* In WinHugs set env `HUGSDIR=<rootdir>\hugsdir`
* Run.

The testing to this point has been very limited. Please email me at david@andl.org or raise an issue if you find something wrong.

## History of Steps to Get Here
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
* Fixed all warnings. 
* Added build step for `parser.y`. This will only work if MinGW is installed at default location.
* Checked all builds.
* Check in and push.

