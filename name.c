#include <stdio.h>
#include <unistd.h>

int main(int argc, char * argv []) {
	char buffer[10][0];
	printf("What's your name?\n");
	read(STDIN_FILENO, buffer, 10);
	printf("Hello %s\n", buffer);
	return 0;

}
