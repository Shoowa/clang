#include <stdio.h>
#define TABSPACE 4

int main(int argc, char *argv[])
{
	int i;
	int limit;
	char whatever[] = "You can have whatever you like.";

	limit = sizeof(whatever) / sizeof(char);

	for (i = 0; i < limit; ++i) {
		if (whatever[i] == ' ') {
			whatever[i] = '!';
		}
	}

	printf("Here is the altered text.\n%s\n", whatever);

	return 0;
}
