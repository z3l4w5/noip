// 1910.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


/*

【题目描述】
NCL是一家专门从事计算器改良与升级的实验室，最近该实验室收到了某公司所委托的一个任务：
需要在该公司某型号的计算器上加上解一元一次方程的功能。
实验室将这个任务交给了一个刚进入的新手ZL先生。
为了很好的完成这个任务,ZL先生首先研究了一些一元一次方程的实例：

4+3x=8

6a-5+1=2-2a

-5+12Y=0

ZL先生被主管告之，在计算器上键入的一个一元一次方程中，只包含整数、小写字母 及十、一、＝这三个数学符号
（当然，符号“一”既可作减号，也可作负号）。
方程中并没有括号，也没有除号，方程中的字母表示未知数。

【输入】
输入一个一元一次方程,可认为输入的一元一次方程均为合法的，且有唯一实数解。

【输出】
将解方程的结果（精确至小数点后三位）输出。

【输入样例】
6a-5+1=2-2a
【输出样例】
a=0.750
*/

#include <iostream>
#include <stdio.h>

using namespace std;

char alpha;
int factor;
int value;

// 0 是起始 // 1 是已碰到字符， 2是已碰到数字，3是已碰到运算符号，4是已碰到等号
int status = 0;
// 当前数字
int num = 0;
// 当前符号
int flag = 1;
// 是否在等号前
int beforEqual = 1;

void meetAlpha(char c) {
	switch (status)
	{
	case 0:
		factor = 1;
		break;
	case 1:
		// 在字母的情况下，不可能
		break;
	case 2:
		// 在数字的情况下，碰到字母，接收为系数
		factor += beforEqual ? num * flag : -num * flag;
		num = 0;
		break;
	case 3:
		// 在碰到运算符的情况下，碰到字符，接收为1系数
		factor += beforEqual ? flag : -flag;
		break;
	case 4:
		// 在过了等号的时候碰到字符
		factor -= 1;
		break;
	default:
		break;
	}

	alpha = c;
	status = 1;
}

void meetNum(int n) {
	switch (status)
	{
	case 0:
		// 起始的时候遇到
		num = n;
		break;
	case 1:
		// 在已经是字母的时候遇到
		// 不可能
		break;
	case 2:
		// 在数字的情况下，碰到数字，升位
		num = num * 10 + n;
		break;
	case 3:
		// 在碰到运算符的情况下，碰到数
		num = n;
		break;
	case 4:
		// 在过了等号的时候碰到数字
		num = n;
		break;
	default:
		break;
	}

	status = 2;
}

void meetOp(int _flag) {
	switch (status)
	{
	case 0:
		// 起始的时候遇到
		break;
	case 1:
		// 在已经是字母的时候遇到
		break;
	case 2:
		// 在数字的情况下，碰到加减
		value += beforEqual ? -num * flag : num * flag;
		num = 0;
		break;
	case 3:
		// 在碰到运算符的情况下，又碰到
		// 不可能
		break;
	case 4:
		// 在过了等号的时候碰到
		break;
	default:
		break;
	}

	flag = _flag;
	status = 3;
}

void meetEq() {
	switch (status)
	{
	case 0:
		// 起始的时候遇到
		// 不可能
		break;
	case 1:
		// 在已经是字母的时候遇到
		break;
	case 2:
		// 在数字的情况下，碰到=
		value += beforEqual ? -num * flag : num * flag;
		num = 0;
		break;
	case 3:
		// 在碰到运算符的情况下，碰到数
		// 不可能
		break;
	case 4:
		// 在过了等号的时候碰到
		// 不可能
		break;
	default:
		break;
	}

	beforEqual = 0;
	status = 4;
}

void meetEnd() {
	switch (status)
	{
	case 0:
		// 起始的时候遇到
		// 不可能
		break;
	case 1:
		// 在已经是字母的时候遇到
		break;
	case 2:
		// 在数字的情况下，碰到加减
		value += beforEqual ? -num * flag : num * flag;
		num = 0;
		break;
	case 3:
		// 在碰到运算符的情况下，碰到数
		// 不可能
		break;
	case 4:
		// 在过了等号的时候碰到

		break;
	default:
		break;
	}
}


int main()
{

	char c;

	while ((c = getchar()) != EOF)
	{
		if (c >= 'A' && c <= 'z') {
			meetAlpha(c);
		}
		else if (c >= '0' && c <= '9') {
			meetNum(c - '0');
		}
		else if (c == '+') {
			meetOp(1);
		}
		else if (c == '-') {
			meetOp(-1);
		}
		else if (c == '=') {
			meetEq();
		}
	}

	meetEnd();

	// cout << arr << endl;
	// cout << value << endl;
	// cout << factor << endl;
	printf("%c=%.3f", alpha, (float)value / factor);
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
