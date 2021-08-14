#include <stdio.h>
#define MAX 200001
int	main(void)
{
	int S, T;
	int	ans = 0;
	scanf("%d%d", &S, &T);

	for (size_t i = 0; i <= S; i++)
	{
		for (size_t j = 0; j <= S - i; j++)
		{
			for (size_t k = 0; k <= S - i - j; k++)
			{
				if (i * j * k <= T)
					ans++;
			}

		}
	}
	printf("%d\n", ans);

}
