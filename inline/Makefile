cl_.exe : prog.obj inl.obj
	cl /nologo /W4 $^ /Fe$@

prog.obj: prog.cpp inl.h
	cl /nologo /c /W4 /EHsc  $< /Fo$@
	
inl.obj: inl.cpp inl.h
	cl /nologo /c /W4 /EHsc  $< /Fo$@

# gcc_.exe : prog.cpp
# 	g++ prog.cpp -o $@
