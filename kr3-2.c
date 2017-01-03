#include <stdio.h>
#define MAX 50

void escape(char s[], char t[]);

int main(int argc, char *argv[])
{
	char target[MAX];
	char message[MAX];
 	int i;
	int c;

	for (i = 0; (c = getchar()) != EOF; i++) {
		message[i] = c;
	}

	escape(message, target);
	printf("%s\n", target);

	return 0;
}

void escape(char s[], char t[])
{
	int i;

	for (i = 0; i < MAX; i++) {
		switch(s[i]) {
			case '\n':
				t[i] = 'N';
				break;
			case '\t':
				t[i] = 'T';
				break;
			case ' ':
				t[i] = 'S';
				break;
			default:
				t[i] = s[i];
		}
	}
}

