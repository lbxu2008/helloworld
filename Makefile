MACH = 
LIBSRC = ztbt_interface.c 
HEADER = ztbt_interface.h 
TESTSRC = main.c
LIBS = -lpthread -ldl
CC = arm-linux-gcc

TARGETLIB = libztbt.so
TARGETTEST = ztbttest
TARGETINC	= ztbt_interface.h 


$(TARGETTEST): $(TESTSRC) $(TARGETLIB) 
	$(CC) -g -Wall -o $(TARGETTEST) $(TESTSRC) -lztbt -L./ 

$(TARGETLIB): $(HEADER) $(LIBSRC) 
	$(CC) -g -Wall  -o $(TARGETLIB) $(LIBSRC) -fPIC -shared  -lpthread 

.PHONY : clean
clean:
	rm -rf $(TARGETLIB)
	rm -rf $(TARGETTEST)
	rm -rf *.bak
