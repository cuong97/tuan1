#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	char s[1000];
	fflush(stdin);
	gets_s(s);
	int thuong = 0;
	int hoa = 0;
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i]>=96 && s[i]<=123)
		{
			thuong++;
		}
		else if (s[i] >=65 && s[i] <=90) {
			hoa++;
		}
	}
	printf("\nSo ki tu hoa: %d", hoa);
	printf("\nSo ki tu thuong: %d", thuong);
	_getch();
}
