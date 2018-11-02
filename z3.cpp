// z3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//判断输出完数
#include "math.h"
#include "pch.h"
#include <iostream>
int wanshu(int z)
{
	int y, x = 0;
	for (y = 1; y < z; y++)
	{
		if (z%y == 0)x = x + y;
	}
	if (z == x)
		return 1;
	else
		return 0;
}
int main()
{
    std::cout << "Hello World!\n"; 
	int wanshu(int z);
	int i, a, b;
	for (i = 1; i < 1000; i++)
	{
		a = wanshu(i);
		if (a == 1)
		{
			printf("%d OK ", i);
			for (b = 1; b < i; b++)
			{
				if (i%b == 0)
				{
					printf("%d,",b);
				}
			}
			printf("\b\n");
		}
	}
	return 0;
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
