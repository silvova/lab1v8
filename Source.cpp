#include <stdio.h>

long int fact (int N) {
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}
int main() {
	int n = 0, k = 0;
	long int C = 0;
	printf("Enter an integer N\n");
	scanf_s("%d", &n);
	printf("Enter an integer K\n");
	scanf_s("%d", &k);
	C = fact(n) / (fact(n - k) * fact(k));
	printf("%d", C);
	return 0;
}