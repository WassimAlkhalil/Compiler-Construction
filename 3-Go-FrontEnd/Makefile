all:
#	bnfc -cpp GoLang.cf
#	rm -f Test.C
#	flex -Pcpp_ GoLang.l
#	yacc -t -pcpp_ GoLang.y
	
	clang++-9 -g -static *.cpp *.C -O3 -o compiler -std=c++17

clean:
	rm -f compiler

distclean: clean
	rm -f Absyn.* GoLang.l GoLang.y lex.yy.c y.tab.c Parser.H Printer.* Skeleton.*

test:
	@echo "==========Testing Legal==========="
	-./compiler Tests/Legal/var.go
	-./compiler Tests/Legal/if-else.go
	-./compiler Tests/Legal/for.go
	-./compiler Tests/Legal/while.go
	-./compiler Tests/Legal/struct.go
	-./compiler Tests/Legal/incrdecr.go
	-./compiler Tests/Legal/function.go
	-./compiler Tests/Legal/const.go

	@echo "======Testing Illegal Syntax======"
	-./compiler Tests/IllegalSyntax/function.go
	-./compiler Tests/IllegalSyntax/if-else.go
	-./compiler Tests/IllegalSyntax/for.go
	-./compiler Tests/IllegalSyntax/while.go
	-./compiler Tests/IllegalSyntax/struct.go
	-./compiler Tests/IllegalSyntax/var.go
	-./compiler Tests/IllegalSyntax/id.go
	-./compiler Tests/IllegalSyntax/const.go
	
	@echo "=====Testing Illegal Semantic====="
	-./compiler Tests/IllegalSemantic/wrongVar.go
	-./compiler Tests/IllegalSemantic/wrongFor.go
	-./compiler Tests/IllegalSemantic/wrongFunc.go
	-./compiler Tests/IllegalSemantic/wrongWhile.go
	-./compiler Tests/IllegalSemantic/wrongIncrDecr.go
	-./compiler Tests/IllegalSemantic/wrongReturnType.go
	-./compiler Tests/IllegalSemantic/wrongField.go
	-./compiler Tests/IllegalSemantic/assignConst.go

