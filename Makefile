  #the compiler: gcc for C program, g++ for C++
  CC = g++

  # compiler flags:
  #  -g    adds debugging information to the executable file
  #  -Wall turns on most, but not all, compiler warnings
  CFLAGS = -g -Wall

  # the build target executable:
  TARGET = MatrixCalculator

.PHONY: clean tar script #these targets are not to be compiled

  all: Add Sub Mul Det Menu Dim Input $(TARGET)

  clean:
	$(RM) $(TARGET)
	$(RM) *.o

  tar:
	tar cf $(TARGET).tar *.cpp *.h *.scr Makefile Simple\ Makefile

  script:
	script $(TARGET).scr

  add:
	$(CC) -c $(TARGET)Add.cpp -o $(TARGET)add.o
  sub:
	$(CC) -c $(TARGET)Sub.cpp -o $(TARGET)sub.o
  mul:
	$(CC) -c $(TARGET)Mul.cpp -o $(TARGET)mul.o
  det:
	$(CC) -c $(TARGET)Det.cpp -o $(TARGET)det.o
  menu:
	$(CC) -c $(TARGET)Menu.cpp -o $(TARGET)menu.o
  dim:
	$(CC) -c $(TARGET)Dim.cpp -o $(TARGET)dim.o
  input:
	$(CC) -c $(TARGET)Input.cpp -o $(TARGET)input.o

  $(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp -o $(TARGET) *.o
