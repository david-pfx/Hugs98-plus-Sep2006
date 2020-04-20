# HUGS

This is a download of Hugs from <https://www.haskell.org/hugs/downloads/2006-09/hugs98-plus-Sep2006.tar.gz>, with the following:
* all the SLN files have been loaded into Visual Studio 2019 and converted
* all the SLN files have been built, with minimal changes to achieve a successful build.
* the Hugs programs all run, but are not usable until a prelude is created.

Here are the results so far:
* Installer: Compiled 1 project with one error. Fixed one CPP compliance issue. 22 deprecation warnings, nothing serious.
* Uninstaller: Compiled 1 project with 13 deprecation warnings, nothing serious.
* Hugs.sln: compiled 3 projects with 3 errors. Fixed by commenting out unneeded configuration items. 
504 warnings, mixture of deprecation and standars compliance. Nothing too serious, but should be reviewed.
* Winhugs.sln: compiled 1 projecct with 224 warnings, a mix of deprecation, bad code and casting issues. Should be reviewed.

The repo has been updated at this point.