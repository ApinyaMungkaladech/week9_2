#include<stdio.h>
int isPrime();
int main() {
	if (isPrime() == 1)
	printf("Prime number");
}
int isPrime()
{
	int a;
	int k = 2;
	int n = 1;
	while (n == 1 || n > k) {
		printf("Enter number : ");
		scanf_s("%d", &a);
		n = a;
		k = 2;
		while (a > 1) {
			while (a % k == 0) {
				a /= k;

			}
			k++;
		}
	}
	return 1;
}

