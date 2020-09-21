// 1465.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*
1465：【例题1】剪花布条

时间限制: 1000 ms         内存限制: 65536 KB
提交数: 1112     通过数: 722
【题目描述】
原题来自：HDU 2087

一块花布条，里面有些图案，另有一块直接可用的小饰条，里面也有一些图案。对于给定的花布条和小饰条，计算一下能从花布条中尽可能剪出几块小饰条来呢？

【输入】
输入数据为多组数据，读取到 # 字符时结束。每组数据仅有一行，为由空格分开的花布条和小饰条。花布条和小饰条都是用可见 ASCII 字符表示的，不会超过 1000 个字符。

注意：这个 # 应为单个字符。若某字符串开头有 #，不意味着读入结束！

【输出】
对于每组数据，输出一行一个整数，表示能从花纹布中剪出的最多小饰条个数。

【输入样例】
abcde a3
aaaaaa aa
#
【输出样例】
0
3
*/

#include <iostream>
/*KMP算法*/
#include<stdio.h>
#include<string.h>
const int maxn = 1005;
int m, n, nxt[maxn];
char s[maxn], t[maxn];//s[]为模式串，t[]为匹配串 

void getnext()
{
	nxt[0] = 0;
	for (int i = 1; i < n; i++)
	{
		int j = nxt[i - 1];
		while (t[j] != t[i] && j > 0)
		{
			j = nxt[j - 1];
		}
		if (t[j] == t[i])
			nxt[i] = j + 1;
		else nxt[i] = 0;
	}
}

int kmp()
{
	int j = 0;
	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		while (t[j] != s[i] && j > 0)
			j = nxt[j - 1];
		if (t[j] == s[i]) j++;
		if (j >= n)
		{
			ans++;
			j = 0;
		}
	}
	return ans;
}
int main()
{
	while (~scanf("%s", s))
	{
		if (s[0] == '#')
			break;
		scanf("%s", t);
		m = strlen(s);
		n = strlen(t);
		getnext();
		printf("%d\n", kmp());
	}
	return 0;
}

// 原文链接：https ://blog.csdn.net/hanyue0102/java/article/details/81587125
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
