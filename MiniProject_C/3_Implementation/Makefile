PROJECT_NAME = all.exe
SRC = Snake-Game.c\
src\draw.c\
src\input.c\
src\logic.c\
src\setup.c

INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe
