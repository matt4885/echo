#include <stdio.h>
#include <string.h>

/* 
echo 
-------
Prints whatever is in stdin to stdout.
-------
*/
int main(int argc, char *argv[]) 
{
	//./echo -n hello will print hello\n
	int nFlag = 0;

	if (!strcmp(argv[1], "-n")) {
		nFlag = 1;
	}
	for (int i = 1 + nFlag; i < argc; i++) {
		for (int j = 0; j < strlen(argv[i]); j++) {
			printf("%c", argv[i][j]);
		}
		printf(" ");
	}

	if (nFlag) { 
		printf("\n");
	}

	return 0;
}
