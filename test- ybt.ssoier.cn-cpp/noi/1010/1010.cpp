﻿// 1010.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
题目描述】
两个整数a和b分别作为分子和分母，既分数ab，求它的浮点数值(双精度浮点数，保留小数点后9位)。

【输入】
输入仅一行，包括两个整数a和b。

【输出】
输出也仅一行，分数ab 的浮点数值（双精度浮点数，保留小数点后9位）
*/

#include <iostream>;
#include <stdio.h>;
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    double c = (double)a / b;
    printf("%.9f",c);
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
