SRC = unity/unity.c\
src/dvr.c\

main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = DVR.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
	 make all
  shell: /bin/bash -e {0}
