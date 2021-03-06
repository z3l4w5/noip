﻿// 1610.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*
【题目描述】
原题来自：HNOI 2008

P 教授要去看奥运，但是他舍不得他的玩具，于是他决定把所有的玩具运到北京。

他使用自己的压缩器进行压缩。这个压缩器可以将任意物品变成一维，再放到一种特殊的一维容器中。P 教授有编号为 1…N 的 N 件玩具，玩具经过压缩后会变成一维，第 i 件件玩具压缩后长度为 Ci 。

为了方便整理，P 教授要求：

在一个一维容器中，玩具的编号是连续的；

如果一个一维容器中有多个玩具，那么两件玩具之间要加入一个单位长度的填充物。形式地说，如果要将 i 号玩具到 j 号玩具 (i≤j) 放到同一个容器中，则容器长度不小于x=j−i+∑jk=iCk
制作容器的费用与容器的长度有关，根据教授研究，如果容器长度为 x，其制作费用为 (X−L)2 ，其中 L 是一个常量。

P 教授不关心容器的数目，他可以制作出任意长度的容器，甚至超过 L。试求最小费用。

【输入】
第一行输入两个整数 N,L；

接下来 N 行，每行一个整数 Ci 。

【输出】
输出最小费用。

【输入样例】
5 4
3
4
2
1
4
【输出样例】
1
【提示】
数据范围与提示：

对于全部数据，1≤N≤5×104,1≤L,Ci≤107 。
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
