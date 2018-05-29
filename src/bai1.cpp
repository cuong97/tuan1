#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int a[100] = { 0 };
	int tg;
	scanf_s("%d", &n);
	a[1] = n / 100;
	a[2] = (n - a[1] * 100) / 10;
	a[3] = n % 10;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = i + 1; j <= 3; j++)
		{
			if (a[i] < a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	for (int i = 1; i <= 3; i++)
	{
		printf("%d", a[i]);
	}
	_getch();
}
