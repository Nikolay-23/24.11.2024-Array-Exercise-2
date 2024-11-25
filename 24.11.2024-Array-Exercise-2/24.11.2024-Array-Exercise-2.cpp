

#include <iostream>

int main()
{
	int N;
	int A[20];
	int sum = 0;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		if (N > 100)
		{
			printf("Error");
			break;
		}

		scanf_s("%d", &A[i]);

	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] % 2 == 0)
		{
			sum += A[i];


		}

	}

	printf("Sum of all even numbers is -> %d", sum);
}


	

