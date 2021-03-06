﻿// 1912.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
【题目描述】
今年是国际数学联盟确定的“2000——世界数学年”，又恰逢我国著名数学家华罗庚先 生诞辰90周年。
在华罗庚先生的家乡江苏金坛，组织了一场别开生面的数学智力竞赛的活动，你的一个好朋友XZ也有幸得以参加。
活动中，主持人给所有参加活动的选手出了这样 一道题目:

设有一个长度N的数字串，要求选手使用K个乘号将它分成K+1个部分，找出一种分法，使得这K+1个部分的乘积能够为最大。
同时，为了帮助选手能够正确理解题意，主持人还举了如下的一个例子：
有一个数字串: 312，当N=3，K=1时会有以下两种分法：

1）3*12=36
2）31*2=62

这时，符合题目要求的结果是： 31*2=62
现在，请你帮助你的好朋友XZ设计一个程序，求得正确的答案。
【输入】
输入共有两行:

第一行共有2个自然数N,K (6≤N≤40，1≤K≤6)
第二行是一个K度为N的数字串。

【输出】
所求得的最大乘积（一个自然数）。

【输入样例】
4 2
1231
【输出样例】
62
*/
#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
# define ll long long
const int maxn = 2e3 + 100;
ll dp[maxn][maxn];
char str[maxn];
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	scanf("%s", str + 1);
	int len = strlen(str + 1);
	ll tmp = 0;
	for (int i = 1; i <= len; i++)
	{
		tmp = tmp * 10 + (str[i] - '0');
		dp[i][0] = tmp;
	}
	for (int i = 1; i <= len; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			for (int w = 1; w < i; w++)
			{
				ll tmp = 0;
				for (int jj = w + 1; jj <= i; jj++)
				{
					tmp = tmp * 10 + (str[jj] - '0');
				}
				dp[i][j] = max(dp[i][j], dp[w][j - 1] * tmp);
			}
		}
	}
	printf("%lld\n", dp[len][k]);
	return 0;
}