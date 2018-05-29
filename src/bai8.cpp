#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	char s[1000];
	fflush(stdin);
	gets_s(s);
	for (int i = strlen(s) - 1; i >= 0; --i) {
		printf("%c", s[i]);
	}
	_getch();
}
