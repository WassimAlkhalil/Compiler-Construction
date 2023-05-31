all:
# bnfc -cpp CPP.cf
# rm -f Test.C
# flex -Pcpp_ CPP.l
# yacc -t -pcpp_ CPP.y

	clang++-9 -g -static *.cpp *.C *c -O3 -o compiler -std=c++17


# zip file for submission

zip: 
	zip -r compiler.zip \
	Makefile \
	CPP.cf CPP.l CPP.y \
	Absyn.C Absyn.H \
	Buffer.C Buffer.H \
	Bison.H \
	Parser.H ParserError.H \
	Printer.C Printer.H \
	main.cpp \
	Interpreter.cpp Interpreter.h \
	lex.cpp_.c y.tab.c \
	ErrorManagment.h \
	TypeCompare.h \
	Scope.h \
	Environment.h \

delete: 
	rm -f compiler.zip
clean:
	rm -f compiler

distclean: clean
	rm -f Absyn.* CPP.l CPP.y lex.yy.c y.tab.c Parser.H Printer.* Skeleton.*