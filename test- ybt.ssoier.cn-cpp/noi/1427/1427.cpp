// 1427.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*

【题目描述】
在黑板上写了N个正整数作成的一个数列，进行如下操作：每一次擦去其中的两个数a和b，然后在数列中加入一个数a×b+1，如此下去直至黑板上剩下一个数，
在所有按这种操作方式最后得到的数中，最大的max，最小的为min，则该数列的极差定义为M=max−min。

【输入】
第一行，一个数为N;

第二行，N个数。

【输出】
输出极差。

【输入样例】
3
1 2 3
【输出样例】
2
*/

#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	int* nums;
	int result = 0;
	cin >> n;
	nums = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	// 从小到大排列
	sort(nums, nums + n);

	// min就是始终用当前最大的相乘，在大数相乘因子还小的时候，先用掉
	int min = nums[n - 1] * nums[n - 2] + 1;
	// 这是min肯定也是最大的，要赶紧用掉它
	for (int i = 2; i < n; i++)
	{
		min = min * nums[n - i - 1] + 1;
	}

	// cout << min;

	// max 就是始终用当前最小的相乘，把大数放在因子最大的时候，最后再用
	int max = nums[0] * nums[1] + 1;

	for (int index = 1; index < n - 1; index++)
	{
		for (int j = index + 1; j < n; j++)
		{
			int t = nums[j];
			if (max <= t)
			{
				nums[j - 1] = max;
				break;
			}
			else
			{
				nums[j - 1] = nums[j];
				nums[j] = max;
			}
		}
		max = nums[index] * nums[index + 1] + 1;
	}

	// cout << max;

	cout << max - min;
}

// 理解题目的含义更加重要