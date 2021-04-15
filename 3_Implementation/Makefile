PROJECT_NAME = snake
SRC = src\draw.c\
src\input.c\
src\logic.c\
src\setup.c

INC = inc

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXE = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXE = out
   endif
endif
.PHONY: run clean test doc all

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) main.c -o $(call FixPath,$(PROJECT_NAME).$(EXE))
	
run: $(PROJECT_NAME)
	$(call FixPath,$(PROJECT_NAME).$(EXE))
	
cppcheck:	
	cppcheck --enable=all $(SRC) main.c

debug:
	gcc -I $(INC) $(SRC) main.c -g -o $(PROJECT_NAME).$(EXE)
	gdb $(PROJECT_NAME).$(EXE)


	
clean:
	$(RM) /q *.$(EXE)
