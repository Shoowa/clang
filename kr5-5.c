#include <stdio.h>

void extrastrncpy(char *source, char *target, int n);

int main(int argc, char *argv[])
{
	int size = 5; 
	char one[] = "Yon Cassius has a lean and hungry look.";
	char two[10];

	extrastrncpy(one, two, size);
	printf("%s\n", two);
	return 0;
}

void extrastrncpy(char *source, char *target, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		*target = *source;
		target++;
		source++;
	}
}
