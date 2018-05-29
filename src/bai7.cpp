#include <stdio.h>
#include <conio.h>
int UCLN(int a, int b) {
	if (a%b != 0)
		return UCLN(b, a%b);
	else
		return b;
}

int BCNN(int a, int b) {
	return (a*b) / UCLN(a, b);
}

int main() {
	int a, b, ucln, bcnn;
	scanf_s("%d%d", &a, &b);
	ucln = UCLN(a, b);
	printf("UCLN: %d\n", ucln);
	bcnn = BCNN(a, b);
	printf("BCNN: %d\n", bcnn);
	_getch();
}
