#include <stdio.h>

int extrastrindex(char *needle, char *haystack);

int main(int argc, char *argv[])
{
	char letter[] = "c";
	char sentence[] = "Who ate the peanuts and carrots?";
	int value;

	value = extrastrindex(letter, sentence);
	printf("%d\n", value);

	return 0;
}

int extrastrindex(char *needle, char *haystack)
{
	char *beginning = haystack;

	for ( ; *haystack != '\0'; haystack++) {
		if (*needle == *haystack) {
			return haystack - beginning;
		}
	}

	return -1;
}
