PROJECT_NAME = snake
SRC = Snake-Game.c\
\draw.c\
\input.c\
\logic.c\
\setup.c

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

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o $(call FixPath,$(PROJECT_NAME).$(EXE))
	
run: $(PROJECT_NAME)
	$(call FixPath,$(PROJECT_NAME).$(EXE))
	
clean:
	$(RM) /q *.$(EXE)
