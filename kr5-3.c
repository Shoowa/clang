#include <stdio.h>

void extrastrcat(char s[], char t[]);

int main(int argc, char *argv[])
{
	char a[30] = "First message";
	char b[] = "Second message";

	printf("%s\n", a);
	printf("%s\n", b);
	extrastrcat(a, b);
	printf("%s\n", a);	

	return 0;
}

void extrastrcat(char first[], char second[])
{
	while (*first != '\0') { // find end of First
		first++;
	}

	while ((*first = *second)) { // appending second to end of first
		first++;
		second++;
	}
}
