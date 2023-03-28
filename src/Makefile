CG = gcc
CGFLAGS = -Wall -Werror -Werror
BUILD = ../build/

all: cipher logging_cipher

cipher:
	$(CG) $(CGFLAGS) cipher.c  -o $(BUILD)cipher

logging_cipher:
	$(CG) $(CGFLAGS) cipher.c logger.c module_io.c -o $(BUILD)logging_cipher


clean:
	rm -rf *.o $(BUILD)cipher