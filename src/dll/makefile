CXX=g++
VBC=C:/Windows/Microsoft.NET/Framework/v4.0.30319/vbc.exe
LIBDIR=./lib
BINDIR=./bin
LIBSRC=./src/lib.cpp
LIBCFLAGS=-I./src
LIBNAM=a
LIB=./lib/$(LIBNAM).dll
LIBS=./lib/$(LIBNAM).a
LIBOBJ=./bin/$(LIBNAM).o
LIBDEF=./lib/$(LIBNAM).def
LIBDEF2=./lib/$(LIBNAM)2.def
LIBMAP=./lib/$(LIBNAM).map
LIBMAP@=./lib/$(LIBNAM).map
APPSRC=./src/app.cpp
APPCFLAGS=-I./src -L./lib
APPBIN=./bin/app.exe
APPLDFLAGS=-la
APPOBJ=./bin/app.o
VBAPPSRC=./src/a.bas
VBAPPNAM=vbapp
VBAPPBIN=./bin/$(VBAPPNAM).exe
all:$(APPBIN) $(VBAPPBIN)
$(VBAPPBIN):$(VBAPPSRC) $(LIB)
	$(VBC)\
		/out:$(VBAPPNAM)\
		/main:MainModule\
		/target:exe\
		$(shell echo $(VBAPPSRC)|sed 's/\//\\\//g')
	mv ./$(VBAPPNAM).exe $(VBAPPBIN)
$(APPBIN):$(APPOBJ) $(LIB)
	$(CXX)\
		$(APPCFLAGS)\
		$(APPOBJ)\
		$(APPLDFLAGS)\
		-o $(APPBIN)
$(APPOBJ):$(APPSRC)
	$(CXX)\
		-c\
		$(APPSRC)\
		-o $(APPOBJ)
$(LIB):$(LIBSRC)
	g++ -c -DBUILDING_EXAMPLE_DLL $(LIBSRC) -o $(LIBOBJ) 
	g++\
		-shared\
		-o $(LIB)\
		$(LIBOBJ)\
		--shared\
		-s\
		-Wl,--add-stdcall-alias,--subsystem,windows,--kill-at,-Map=$(LIBMAP),--output-def,$(LIBDEF)\
		-o $(LIB)
	ldd $(LIB)
	cp $(LIB) ./res
.phony:\
	clean\
	run
clean:
	rm\
		$(LIB)\
		./bin/*

run: $(APPBIN)
	@PATH=$$PATH:./lib $(APPBIN)
runvb: $(VBAPPBIN)
	@PATH=$$PATH:./lib $(VBAPPBIN)



