PROJECT_NAME = snake
TEST_PROJ_NAME = Test_$(PROJECT_NAME)
SRC = src\draw.c\
src\input.c\
src\logic.c\
src\setup.c

INC = inc
INC_T= unity

TEST_SRC = test\test.c 

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

test:
	gcc -I $(INC) -I $(INC_T) -I $(TEST_SRC)  $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXE))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXE))
	
cppcheck:	
	cppcheck --enable=all $(SRC) main.c
	
valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXE)

debug:
	gcc -I $(INC) $(SRC) main.c -g -o $(PROJECT_NAME).$(EXE)
	gdb $(PROJECT_NAME).$(EXE)


	
clean:
	$(RM) /q *.$(EXE)
