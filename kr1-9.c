#include <stdio.h>
#define MAXLINE 1000

int getwhatever(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
	int length;
	int maximum;
	char line[MAXLINE];
	char longest[MAXLINE];

	maximum = 0;
	while ((length = getwhatever(line, MAXLINE)) > 0)
		if (length > maximum) {
			maximum = length;
			copy(longest, line);
		}
	if (maximum > 0) {
		printf("%s", longest);
	}

	return 0;
}

int getwhatever(char string[], int limit)
{
	int c, i;
	for (i=0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		string[i] = c;
	if (c == '\n') {
		string[i] = c;
		++i;
	}
	string[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
} 
