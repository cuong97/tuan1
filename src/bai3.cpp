#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n <= 1000) printf("10.000");
	else if (n>30000) {
		int ans = 10000 + 29 * 5 * 1500;
		ans += ((float)(n - 30000) / 1000) * 8000;
		printf("%d", ans);
	}
	else {
		int ans = 10000;
		ans += ((float)(n - 1000) / 1000) * 5 * 1500;
		printf("%d", ans);
	}
	_getch();
}
