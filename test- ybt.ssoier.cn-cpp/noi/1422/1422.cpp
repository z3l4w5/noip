﻿// 1422.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


/*
【题目描述】
设有n个活动的集合E={1,2,…,n}，其中每个活动都要求使用同一资源，如演讲会场等，而在同一时间内只有一个活动能使用这一资源。
每个活动i都有一个要求使用该资源的起始时间si和一个结束时间fi,且si<fi。如果选择了活动i，则它在半开时间区间[si,fi)内占用资源。
若区间[si,fi)与区间[sj,fj)不相交,则称活动i与活动j是相容的。
也就是说，当si≥fj或sj≥fi时，活动i与活动j相容。选择出由相互兼容的活动组成的最大集合。

【输入】
第1行一个整数n(n≤1000)，接下来n行，每行两个整数si和fi。

【输出】
输出尽可能多的互相兼容的活动个数。

【输入样例】
4
1 3
4 6
2 5
1 7
【输出样例】
2
*/

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
