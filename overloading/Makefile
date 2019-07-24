all: cl_.exe gcc_.exe

cl_.exe : prog.cpp
	cl /nologo /W4 /EHsc prog.cpp /Fe$@

gcc_.exe : prog.cpp
	g++ prog.cpp -o $@
