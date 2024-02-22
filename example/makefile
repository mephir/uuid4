all: build

build:
	gcc -Wall -Wextra -lssl -lcrypto -o example -I../src/ ../src/uuid4.c example.c

clean:
	rm example
