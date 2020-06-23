// 1910-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char c, id;
    int a = 0, b = 0, num = 0, op = 1, dir = 1;
    //a是未知数的系数，b是常数的系数，最终变成的形式是ax + b = 0;
    while ((c = getchar()) != EOF)
    {
        if ('a' <= c && c <= 'z')
        {
            id = c;
            if (num == 0) num = 1;
            a += dir * op * num;
            num = 0;
        }
        else if ('0' <= c && c <= '9')
        {
            num = num * 10 + c - '0';
        }
        else
        {
            b += dir * op * num;
            op = 1;
            num = 0;
            if (c == '-')
                op = -1;
            if (c == '=')
                dir = -1;
        }
    }
    printf("%c=%.3f\n", id, -(float)b / a);
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
