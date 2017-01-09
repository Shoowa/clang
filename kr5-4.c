#include <stdio.h>

int extrastrend(char *haystack, char *needle);

int main(int argc, char* argv[])
{
	char *one = "Is this the end?";
	char *two = "?";
	char *three = "d";
	int answer1;
	int answer2;

	answer1 = extrastrend(one, two);
	printf("%d\n", answer1);

	answer2 = extrastrend(one, three);
	printf("%d\n", answer2);
	return 0;
}

int extrastrend(char *haystack, char *needle)
{
	while (*haystack != '\0') {
		haystack++;
	}

	haystack--;

	if (*haystack == *needle) {
		return 1;
	}
	else {
		return 0;
	}
}
