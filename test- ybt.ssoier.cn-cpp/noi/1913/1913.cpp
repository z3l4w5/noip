﻿// 1913.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 字处理

/*

【题目描述】
单词接龙是一个与我们经常玩的成语接龙相类似的游戏，现在我们己知一组单词，且给定一个开头的字母，
要求出以这个字母开头的最长的“龙”(每个单词都最多在“龙" 中出现两次)，在两个单词相连时，其重合部分合为一部分，
例如beast和astonish，如果接成一条龙则变为beastonish，另外相邻的两部分不能存在包含关系，例如at和atide间不能相连。

【输入】
输入的第一行为一个单独的整数n(n≤20）表示单词数，以下n行每行有一个单词，输 入的最后一行为一个单个字符，表来“龙”开头的字母。你可以假定以此字母开头的“龙" 一定存在。

【输出】
只需输出以此字母开头的最长的“龙”的长度

【输入样例】
5
at
touch
cheat
choose
tact
a
【输出样例】
23
【提示】
样例连成的“龙”为atoucheatactactouchoose
*/

// 这是一个深度优先遍历的算法

#include<iostream>
#include<set>
#include<string>
using namespace std;
struct Info
{
	string name;
	int count;
};

struct LongWord
{
	set<Info> words;
	int length;
};
int main()
{
	char header = 'c';
	set<Info> headers = findHeaders(header);

	set<LongWord> set;

	set<Info>::iterator it;

	for (it = headers.begin(); it != headers.end(); it++) {
		(*it)
	}

	return 0;
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
