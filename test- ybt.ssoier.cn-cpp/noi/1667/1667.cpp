﻿// 1667.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*

【题目描述】
原题来自：BZOJ 1299

TBL 和 X 用巧克力棒玩游戏。
每次一人可以从盒子里取出若干条巧克力棒，或是将一根取出的巧克力棒吃掉正整数长度。
TBL 先手两人轮流，无法操作的人输。
他们以最佳策略一共进行了 10 轮（每次一盒）。你能预测胜负吗？

【输入】
输入数据共 20 行。第 2i−1 行一个正整数 Ni ，表示第 i 轮巧克力棒的数目。第 2i 行 Ni 个正整数 Li,j ，表示第 i 轮巧克力棒的长度。

【输出】
输出数据共 10 行。每行输出 YES 或 NO，表示 TBL 是否会赢。如果胜则输出 NO，否则输出 YES。

【输入样例】
3
11 10 15
5
13 6 7 15 3
2
15 12
3
9 7 4
2
15 12
4
15 12 11 15
3
2 14 15
3
3 16 6
4
1 4 10 3
5
8 7 7 5 12
【输出样例】
NO
YES
YES
YES
NO
YES
YES
YES
NO
【提示】
数据范围与提示：

对于 20% 的数据，N≤5,L≤100；

对于 40% 的数据，N≤7；

对于 50% 的数据，L≤5000；

对于全部数据，N≤14,L≤109 。
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