//输出质数
#include "stdio.h"
#include "pch.h"
#include <iostream>
int main()
{
	int i,m,n=0;
	for (i = 1; i < 1000; i++)
	{
		for (m=1;m<i;m++)
		{
			if (i%m == 0)
			{
				n++;
			}
		}
		if (n == 1)
			printf("%d\t", i);
		n = 0;
	}
	return 0;
	while (1);
}