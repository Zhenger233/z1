// z7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//杨辉三角最多30行

#include "pch.h"
#include <iostream>
long long Cmn(int m, int n)
{
	long long z = 1;
	if (m < n - m)m = n - m;
	for (int y = m + 1; y <= n; y++)z *= y;
	for (int x = 1; x <= n - m; x++)z /= x;
	return z;
}
int main()
{
    std::cout << "Hello World!\n"; 
	int n, i, ii;
	printf("n=");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (ii = 1; ii <= i; ii++)
		{
			printf("%lld ", Cmn(ii - 1, i - 1));
		}
		printf("\n");
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
