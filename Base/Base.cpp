// Base.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

// 定义常量：宏常量
#define day 7

int main()
{
    // 通过 cout 输出字符串到控制台
    /*
       这是多行注释
       是
       是
    */
    cout << "Hello World!\n";

    // 变量的定义
    int a = 10;
    cout << "a= " << a << endl;

    // 常量的定义 ,常量不可以修改
    cout << "一周总共有" << day << "天" << endl;
    // 定义常量：const 修饰变量
    const int month = 12;
    cout << "一年里总共有" << month << "个月份" << endl;

    system("pause");// 单行注释 让命令提示框不至于闪现
    return 0;
}
