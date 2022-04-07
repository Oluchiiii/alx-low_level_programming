**gcc $CFILE -E -o c** runs variable(CFILE) through preprocessor and saves output in file(c) and linking them(-o) 
**gcc -S $CFILE** generates assembly code(-S) saved in $CFILE so the extension is .s
**gcc $CFILE -o cisfun** compiles a C file generated in the $CFILe and creates an executable(cisfun)
**gcc -c $CFILE** compiles a file in the variable but does not link it
